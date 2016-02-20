/****************************************************/
/* File: cgen.c                                     */
/* The code generator implementation                */
/* for the TINY compiler                            */
/* (generates code for the TM machine)              */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"
#include "symtab.h"
#include "code.h"
#include "cgen.h"
#include"UTIL.H"

/* tmpOffset is the memory offset for temps
It is decremented each time a temp is
stored, and incremeted when loaded again
*/
static int tmpOffset = 0;

/* prototype for internal recursive code generator */
static void cGen (TreeNode * tree);//保留
static char* genExp( TreeNode * tree);
static char* genBoolExp(TreeNode*tree,int e_true,int e_false);
static void genJudge(TreeNode*t,int e_true,int e_false);
static void genIfThenElse(TreeNode*t,int next);
static void genStmt( TreeNode * tree,int next);
static void genStmt_seq(TreeNode*tree,int next);
static void genRepeat(TreeNode*t,int next);
static void genWhile(TreeNode*t,int next);
static int newLabel();
static int newExp();

int labelIndex=0;
int expIndex=1;
char*midcode="";
char s[20];
char name[5];
/* Procedure genStmt generates code at a statement node */
static int newExp()
{
	return expIndex++;
}
static int newLabel()
{
	return labelIndex++;
}
static void genJudge(TreeNode*t,int e_true, int e_false)
{
	char condition[100];
	switch(t->child[0]->attr.op)
	{
	case AND:
	case OR:
		strcpy(condition,genBoolExp(t->child[0],e_true,e_false));
		break;
	default:
		strcpy(condition,genExp(t->child[0]));
		break;
	}

	strcat(midcode,"if ");
	strcat(midcode,condition);
	strcat(midcode," goto L");
	strcat(midcode,itoa(e_true,s,10));
	strcat(midcode,"\n");
	if (t->child[2]!=NULL)
	{
		strcat(midcode,"goto L");
		strcat(midcode,itoa(e_false,s,10));
		strcat(midcode,"\n");
	}
}
static void genIfThenElse(TreeNode*t,int next)
{
	int e_true=newLabel(),e_false=next;
	if (t->child[2]!=NULL)
	{
		e_false=newLabel();
	}
	genJudge(t,e_true,e_false);
	if (t->child[2]==NULL)
	{
		strcat(midcode,"goto L");
		strcat(midcode,itoa(next,s,10));
		strcat(midcode,"\n");
	}
	strcat(midcode,"Label L");
	strcat(midcode,itoa(e_true,s,10));
	strcat(midcode,"\n");
	genStmt_seq(t->child[1],next);
	if (t->child[2]!=NULL)
	{
		strcat(midcode,"goto L");
		strcat(midcode,itoa(next,s,10));
		strcat(midcode,"\n");
		strcat(midcode,"Label L");
		strcat(midcode,itoa(e_false,s,10));
		strcat(midcode,"\n");
		genStmt_seq(t->child[2],next);
	}		
	if (t->child[2]==NULL)
	{
		strcat(midcode,"Label L");
		strcat(midcode,itoa(next,s,10));
		strcat(midcode,"\n");
	}
}
static void genRepeat(TreeNode*t,int next)
{
	char name[200];
	int s_beg=newLabel(),seq_next=newLabel();
	int e_true=next,e_false=s_beg;
	strcat(midcode,"Label L");
	strcat(midcode,itoa(s_beg,s,10));
	strcat(midcode,"\n");
	genStmt_seq(t->child[0],seq_next);
	//genJudge(t,e_true,e_false);
	
	switch(t->child[1]->attr.op)
	{
	case AND:
	case OR:
		strcpy(name,genBoolExp(t->child[1],e_true,e_false));	
		break;
	default:
		strcpy(name,genExp(t->child[1]));
		break;
	}
	strcat(midcode,"if ");
	strcat(midcode,name);
	strcat(midcode," goto L");
	strcat(midcode,itoa(e_true,s,10));
	strcat(midcode,"\n");

	strcat(midcode,"goto L");
	strcat(midcode,itoa(e_false,s,10));
	strcat(midcode,"\n");
}
static void genWhile(TreeNode*t,int next)
{
	int s_beg=newLabel(),seq_next=s_beg;
	int e_true=newLabel(),e_false=next;
	strcat(midcode,"Label L");
	strcat(midcode,itoa(s_beg,s,10));
	strcat(midcode,"\n");
	genJudge(t,e_true,e_false);
	strcat(midcode,"goto L");
	strcat(midcode,itoa(e_false,s,10));
	strcat(midcode,"\n");
	strcat(midcode,"Label L");
	strcat(midcode,itoa(e_true,s,10));
	strcat(midcode,"\n");
	genStmt_seq(t->child[1],seq_next);
	strcat(midcode,"goto L");
	strcat(midcode,itoa(s_beg,s,10));
	strcat(midcode,"\n");
	strcat(midcode,"Label L");
	strcat(midcode,itoa(next,s,10));
	strcat(midcode,"\n");
}
static void genStmt_seq(TreeNode*t,int next)
{
	int label;
	
	if (t->sibling!=NULL)
	{
		label=newLabel();
		genStmt(t,label);
		genStmt_seq(t->sibling,next);
	}
	else
	{
		genStmt(t,next);
	}
}
static void genStmt( TreeNode * tree,int next)//修改，最好每种节点一个函数
{ 
	int expIndex=0;
	char exp[100];
	switch (tree->kind.stmt) 
	{
	case IfK :
		genIfThenElse(tree,next);
		break; /* if_k */

	case RepeatK:
		
		genRepeat(tree,next);
		
		break; /* repeat */
	case WhileK:
		genWhile(tree,next);
		break;
	case AssignK:	
		strcpy(exp,genExp(tree->child[0]));
		strcat(midcode,tree->attr.name);
		strcat(midcode,":=");
		strcat(midcode,exp);
		strcat(midcode,"\n");
		break; /* assign_k */

	case ReadK:
		strcat(midcode,"read ");
		strcat(midcode,tree->attr.name);
		strcat(midcode,"\n");
		break;
	case WriteK:
		strcpy(exp,genExp(tree->child[0]));
		strcat(midcode,"write ");
		strcat(midcode,exp);
		strcat(midcode,"\n");
		break;
	default:
		break;
	}
} /* genStmt */


static char*genExp( TreeNode * tree)
{ 
	int expIndex=0;
	char p1[10],p2[10];
	switch (tree->kind.exp) 
	{
	case ConstK :
		strcpy(name,itoa(tree->attr.val,s,10));
		break; /* ConstK */
	case StringK:
		strcpy(name,tree->attr.name);
		break;
	case IdK :
		strcpy(name,tree->attr.name);
		break; /* IdK */
	case OpK :
		/* gen code for ac = left arg */
		strcpy(p1,genExp(tree->child[0]));
		strcpy(p2,genExp(tree->child[1]));
		/* gen code to push left operand */
		
		switch (tree->attr.op) {
		case PLUS :
			expIndex=newExp();
			strcat(midcode,"t");
			strcat(midcode,itoa(expIndex,s,10));
			strcat(midcode,"=");
			strcat(midcode,p1);
			strcat(midcode,"+");
			strcat(midcode,p2);
			strcat(midcode,"\n");
			strcpy(name,"t");
			strcat(name,itoa(expIndex,s,10));
			break;
		case MINUS :
			expIndex=newExp();
			strcat(midcode,"t");
			strcat(midcode,itoa(expIndex,s,10));
			strcat(midcode,"=");
			strcat(midcode,p1);
			strcat(midcode,"-");
			strcat(midcode,p2);
			strcat(midcode,"\n");
			strcpy(name,"t");
			strcat(name,itoa(expIndex,s,10));
			break;
		case TIMES :
			expIndex=newExp();
			strcat(midcode,"t");
			strcat(midcode,itoa(expIndex,s,10));
			strcat(midcode,"=");
			strcat(midcode,p1);
			strcat(midcode,"*");
			strcat(midcode,p2);
			strcat(midcode,"\n");
			strcpy(name,"t");
			strcat(name,itoa(expIndex,s,10));
			break;
		case OVER :
			expIndex=newExp();
			strcat(midcode,"t");
			strcat(midcode,itoa(expIndex,s,10));
			strcat(midcode,"=");
			strcat(midcode,p1);
			strcat(midcode,"/");
			strcat(midcode,p2);
			strcat(midcode,"\n");
			strcpy(name,"t");
			strcat(name,itoa(expIndex,s,10));
			break;
		case LT :
			strcpy(name,p1);
			strcat(name,"<");
			strcat(name,p2);
			break;
		case EQ :
			strcpy(name,p1);
			strcat(name,"=");
			strcat(name,p2);
			break;
		case RT :
			strcpy(name,p1);
			strcat(name,">");
			strcat(name,p2);
			break;
		case LTEQ :
			strcpy(name,p1);
			strcat(name,"<=");
			strcat(name,p2);
			break;
		case RTEQ :
			strcpy(name,p1);
			strcat(name,">=");
			strcat(name,p2);
			break;
		default:
			strcpy(name,"BUG: Unknown operator");
			break;
		} /* case op */
		/* gen code for ac = right operand */
		/* now load left operand */
		break; /* OpK */
	default:
		break;
	}

	return name;

} /* genExp */
char boolStmt[100];
static char* genBoolExp(TreeNode*tree,int e_true,int e_false)
{
	int childLabel=newLabel();
	char p1[200],p2[200];
	switch(tree->child[0]->attr.op)
	{
	case AND:
	case OR:
		strcpy(p1,genBoolExp(tree->child[0],e_true,e_false));
		break;
	default:
		strcpy(p1,genExp(tree->child[0]));
		break;
	}
	switch(tree->child[1]->attr.op)
	{
	case AND:
	case OR:
		strcpy(p2,genBoolExp(tree->child[1],e_true,e_false));
		break;
	default:
		strcpy(p2,genExp(tree->child[1]));
		break;
	}
	
	strcpy(boolStmt,p1);
	switch (tree->attr.op) 
	{
	case AND:
		strcat(boolStmt," goto L");
		strcat(boolStmt,itoa(childLabel,s,10));
		strcat(boolStmt,"\n");
		strcat(boolStmt,"goto L");
		strcat(boolStmt,itoa(e_false,s,10));
		strcat(boolStmt,"\n");
		strcat(boolStmt,"Label");
		strcat(boolStmt,itoa(childLabel,s,10));
		strcat(boolStmt,"\n");
		break;
	case OR:
		strcat(boolStmt," goto L");
		strcat(boolStmt,itoa(e_true,s,10));
		strcat(boolStmt,"\n");
		strcat(boolStmt,"goto L");
		strcat(boolStmt,itoa(childLabel,s,10));
		strcat(boolStmt,"\n");
		strcat(boolStmt,"Label");
		strcat(boolStmt,itoa(childLabel,s,10));
		strcat(boolStmt,"\n");
		break;
	default:
		strcat(boolStmt,"BUG: Unknown operator");
		break;
	}
	strcat(boolStmt,"if ");
	strcat(boolStmt,p2);
	return boolStmt;
}
/* Procedure cGen recursively generates code by
* tree traversal
*/
static void cGen( TreeNode * tree)
{
	int next;
	if (tree != NULL)
	{ 
		switch (tree->nodekind) {
		case StmtK:
			next=newLabel();
			genStmt(tree,next);
			break;
		case ExpK:
			genExp(tree);
			break;
		default:
			break;
		}
		cGen(tree->sibling);
	}
}

/**********************************************/
/* the primary function of the code generator */
/**********************************************/
/* Procedure codeGen generates code to a code
* file by traversal of the syntax tree. The
* second parameter (codefile) is the file name
* of the code file, and is used to print the
* file name as a comment in the code file
*/
void codeGen(TreeNode * syntaxTree, char * codefile)
{  
	midcode= (char *)malloc(200000);
	strcpy(midcode,"\nMid Code of Tiny+:\n");//
	cGen(syntaxTree->child[0]);
	printf("%s\n",midcode);
	/* finish */
	/*emitComment("End of execution.");
	emitRO("HALT",0,0,0,"");*/
}
