/****************************************************/
/* File: analyze.c                                  */
/* Semantic analyzer implementation                 */
/* for the TINY compiler                            */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"
#include "symtab.h"
#include "analyze.h"

/* counter for variable memory locations */
static int location = 0;

/* Procedure traverse is a generic recursive 
 * syntax tree traversal routine:
 * it applies preProc in preorder and postProc 
 * in postorder to tree pointed to by t
 */
static void traverse( TreeNode * t,
               void (* preProc) (TreeNode *),
               void (* postProc) (TreeNode *) )
{ if (t != NULL)
  { preProc(t);
    { int i;
      for (i=0; i < MAXCHILDREN; i++)
        traverse(t->child[i],preProc,postProc);
    }
    postProc(t);
   traverse(t->sibling,preProc,postProc);
  }
}

/* nullProc is a do-nothing procedure to 
 * generate preorder-only or postorder-only
 * traversals from traverse
 */
static void nullProc(TreeNode * t)
{ if (t==NULL) return;
  else return;
}

/* Procedure insertNode inserts 
 * identifiers stored in t into 
 * the symbol table 
 */
static void insertNode( TreeNode * t)//pretravel//insert时要插入变量类型
{ 
	TreeNode * p=NULL;
	//不需要遍历整棵树
	switch (t->nodekind)
  { 
	case DeclK:
		switch (t->kind.expType)
		{
		case Head:
		case Void:
			break;
		case DeclId:	
			p=t;
			while (p->sibling!=NULL)
			{
				if (st_lookup(p->sibling->attr.name) == -1)
					st_insert(p->sibling->attr.name,p->lineno,p->sibling->kind.expType,location++);//判断节点种类执行特定的插入
				else
					fprintf(listing,"\nvalue redefine; line:%d; name:%s\n",p->lineno,p->attr.name);
				t=p->sibling;
				p=t;
			}			
			break;
		}
		break;
	case StmtK:
      switch (t->kind.stmt)
      { case AssignK:
        case ReadK:
          if (st_lookup(t->attr.name) == -1)
			  fprintf(listing,"\nvalue no define; line:%d; name:%s\n",t->lineno,t->attr.name);
          /* not yet in table, so treat as new definition */
            //st_insert(t->attr.name,t->lineno,0);//判断节点种类执行特定的插入
          else
          /* already in table, so ignore location, 
             add line number of use only */ 
            st_insert(t->attr.name,t->lineno,t->kind.expType,0);
          break;
        default:
          break;
      }
      break;
    case ExpK:
      switch (t->kind.exp)
      { case IdK:
          if (st_lookup(t->attr.name) == -1)
			   fprintf(listing,"\nvalue no define; line:%d; name:%s\n",t->lineno,t->attr.name);
          /* not yet in table, so treat as new definition */
            /*st_insert(t->attr.name,t->lineno,location++);*/
          else
          /* already in table, so ignore location, 
             add line number of use only */ 
            st_insert(t->attr.name,t->lineno,t->kind.expType,0);
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
}

/* Function buildSymtab constructs the symbol 
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode * syntaxTree)
{ traverse(syntaxTree,insertNode,nullProc);
  if (TraceAnalyze)
  { fprintf(listing,"\nSymbol table:\n\n");
    printSymTab(listing);
  }
}

static void typeError(TreeNode * t, char * message)
{ fprintf(listing,"Type error at line %d: %s\n",t->lineno,message);
  Error = TRUE;
}

/* Procedure checkNode performs
 * type checking at a single tree node
 */
static void checkNode(TreeNode * t)
{ 
	ExpType vt=Void;
	switch (t->nodekind)
	{ case ExpK:
	switch (t->kind.exp)
		//simple-exp bool-exp
	{ case OpK://arimth bool
	if ((t->attr.op == EQ) || (t->attr.op == LT)||(t->attr.op==LTEQ)||(t->attr.op==RTEQ)||(t->attr.op==RT))	
		if ((t->child[0]->type != Integer)&&(t->child[1]->type != Integer))
			typeError(t,"Op applied to non-Integer type");
		else t->type = Boolean;
	else if ((t->attr.op==AND)||(t->attr.op==OR))
	{
		if ((t->child[0]->type != Boolean)&&(t->child[1]->type != Boolean))
			typeError(t,"Bool-Op applied to non-Boolean type");
		else t->type = Boolean;
	}
	else
		t->type = Integer;
	break;
	case ConstK:
	case IdK:
		t->type = Integer;
		break;
	case StringK:
		t->type=Char;
		break;
	default:
		break;
	}
	break;
	case StmtK:
		switch (t->kind.stmt)
		{ case IfK:
		if (t->child[0]->type != Boolean)
			typeError(t->child[0],"if test is not Boolean");
		break;
		case WhileK:
			if (t->child[0]->type != Boolean)
				typeError(t->child[0],"while test is not Boolean");
			break;
		case AssignK://左右要相同
			if (st_lookup(t->attr.name) == -1)
				fprintf(listing,"\nvalue no define; line:%d ;name:%s\n",t->lineno,t->attr.name);
			else if (t->child[0]->type != Integer&&t->child[0]->type != Char)//找到了应该检查类型
			{
				vt=st_lookup2(t->attr.name);
				if (vt!=t->child[0]->type)
				{
					typeError(t->child[0],"assignment of invalid type value");
				}		  
			}
			break;
		case ReadK:
			if (st_lookup(t->attr.name) == -1)
				fprintf(listing,"\nvalue no define; line:%d ;name:%s\n",t->lineno,t->attr.name);
			//else if (t->child[0]->type != Integer&&t->child[0]->type != Char)//找到了应该检查类型
			//{
			//	vt=st_lookup2(t->attr.name);
			//	if (vt!=t->child[0]->type)
			//	{
			//		typeError(t->child[0],"read of invalid type value");
			//	}		  
			//}
			break;
		case WriteK:
			if (st_lookup(t->child[0]->attr.name) == -1)
				fprintf(listing,"\nvalue no define; line:%d ;name:%s\n",t->lineno,t->attr.name);
			else if (t->child[0]->type != Integer&&t->child[0]->type!=Char)
				typeError(t->child[0],"write of invalid type value");
			break;
		case RepeatK:
			if (t->child[1]->type != Boolean)
				typeError(t->child[1],"repeat test is not Boolean");
			break;
		default:
			break;
		}
		break;
	default:
		break;

	}
}

/* Procedure typeCheck performs type checking 
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode * syntaxTree)
{ traverse(syntaxTree,nullProc,checkNode);
}
