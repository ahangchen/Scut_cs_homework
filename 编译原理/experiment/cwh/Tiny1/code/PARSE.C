/****************************************************/
/* File: parse.c                                    */
/* The parser implementation for the TINY compiler  */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

static TokenType token; /* holds current token */

/* function prototypes for recursive calls */
static TreeNode * declaration(void);
static TreeNode * stmt_sequence(void);
static TreeNode * statement(void);
static TreeNode * if_stmt(void);
static TreeNode* while_stmt(void);
static TreeNode * repeat_stmt(void);
static TreeNode * assign_stmt(void);
static TreeNode * read_stmt(void);
static TreeNode * write_stmt(void);
static TreeNode * exp(void);
static TreeNode * simple_exp(void);
static TreeNode * term(void);
static TreeNode * factor(void);
static TreeNode * varlist(void);
static TreeNode * decl(void);
static TreeNode * string_exp(void);
static TreeNode * comparison_op(void);
static TreeNode * program(void);
static TreeNode * comparison_exp(void);
static TreeNode * bfactor(void);
static TreeNode * bterm(void);

static void syntaxError(char * message)
{ fprintf(listing,"\n>>> ");
  fprintf(listing,"Syntax error at line %d: %s",lineno,message);
  Error = TRUE;
}

static void match(TokenType expected)
{ if (token == expected) token = getToken();
  else {
    syntaxError("unexpected token -> ");
    printToken(token,tokenString);
	printf("expecting->");
	printf("%d",expected);
    fprintf(listing,"      ");
  }
}

static TreeNode * comparison_op(void)
{
	if (token==LT||token==RT||token==LTEQ||token==RTEQ||token==EQ)
	{
		match(token);
	}
}

TreeNode * stmt_sequence(void)
{ TreeNode * t = statement();
  TreeNode * p = t;
  while ((token!=ENDFILE) && (token!=END) &&
         (token!=ELSE) && (token!=UNTIL))
  { TreeNode * q;
    match(SEMI);
    q = statement();
    if (q!=NULL) {
      if (t==NULL) t = p = q;
      else /* now p cannot be NULL either */
      { p->sibling = q;
        p = q;
      }
    }
  }
  return t;
}
static TreeNode * program(void)
{
	TreeNode * t=declaration();
	if (t!=NULL)
	{
		t->sibling=stmt_sequence();
	}
	else
	{
		t=stmt_sequence();
	}
	return t;
}
static TreeNode * declaration(void)
{
	TreeNode * t=newDeclNode(Void);
	TreeNode *p=t;
	t->child[0]=decl();
	p=t->child[0];
	while ((token!=ENDFILE) && (token!=END)&&(token==INT||token==BOOL||token==CHAR))
	{ TreeNode * q;
	//match(SEMI);
	q = decl();
	if (q!=NULL) {
		if (t==NULL) t = p = q;
		else /* now p cannot be NULL either */
		{ p->sibling = q;
		p = q;
		}
	}
	}
	return t;
}
static TreeNode * decl(void)
{
	TreeNode * p = newDeclNode(Head);
	switch(token)
	{
	case INT:
		p->child[0]=newDeclNode(Integer);
		p->child[0]->attr.name = copyString(tokenString);
		match(token);
		p->child[0]->sibling=varlist();
		match(SEMI);
		break;
	case BOOL:
		p->child[0]=newDeclNode(Boolean);
		p->child[0]->attr.name = copyString(tokenString);
		match(token);
		p->child[0]->sibling=varlist();
		match(SEMI);
		break;
	case CHAR:
		p->child[0]=newDeclNode(Char);
		p->child[0]->attr.name = copyString(tokenString);
		match(token);
		p->child[0]->sibling=varlist();
		match(SEMI);
		break;
	default:
		syntaxError("unexpected token -> ");
		printToken(token,tokenString);
		token = getToken();
		printf("expecting->ExpType");
		break;
	}
	return p;
}
static TreeNode * varlist(void)
{
	TreeNode * t = newExpNode(IdK);
	TreeNode * p = t;//use to point to sibling
	if ((t!=NULL) && (token==ID))
		t->attr.name = copyString(tokenString);
	match(ID);
	while (token!=SEMI)
	{ TreeNode * q;
	match(COMMA);
	q = varlist();
	if (q!=NULL) {
		if (t==NULL) t = p = q;
		else /* now p cannot be NULL either */
		{ p->sibling = q;
		p = q;
		}
	}
	}
	return t;
}

TreeNode * statement(void)
{ TreeNode * t = NULL;
  switch (token) {
    case IF : t = if_stmt(); break;
    case REPEAT : t = repeat_stmt(); break;
    case ID : t = assign_stmt(); break;
    case READ : t = read_stmt(); break;
    case WRITE : t = write_stmt(); break;
	case WHILE: t=while_stmt();break;
    default : syntaxError("unexpected token -> ");
              printToken(token,tokenString);
			  printf("expecting->statement");
              token = getToken();
              break;
  } /* end case */
  return t;
}

TreeNode * while_stmt(void)
{ TreeNode * t = newStmtNode(WhileK);
  match(WHILE);
  if (t!=NULL) t->child[0] = exp();
  match(DO);
  if (t!=NULL) t->child[1] = stmt_sequence();
  match(END);
  return t;
}

TreeNode * if_stmt(void)
{ TreeNode * t = newStmtNode(IfK);
match(IF);
if (t!=NULL) t->child[0] = exp();
match(THEN);
if (t!=NULL) t->child[1] = stmt_sequence();
if (token==ELSE) {
	match(ELSE);
	if (t!=NULL) t->child[2] = stmt_sequence();
}
match(END);
return t;
}

TreeNode * repeat_stmt(void)
{ TreeNode * t = newStmtNode(RepeatK);
  match(REPEAT);
  if (t!=NULL) t->child[0] = stmt_sequence();
  match(UNTIL);
  if (t!=NULL) t->child[1] = exp();
  return t;
}

TreeNode * assign_stmt(void)
{ TreeNode * t = newStmtNode(AssignK);
  if ((t!=NULL) && (token==ID))
    t->attr.name = copyString(tokenString);
  match(ID);
  match(ASSIGN);
  if (t!=NULL) t->child[0] = exp();
  return t;
}

TreeNode * read_stmt(void)
{ TreeNode * t = newStmtNode(ReadK);
  match(READ);
  if ((t!=NULL) && (token==ID))
    t->attr.name = copyString(tokenString);
  match(ID);
  return t;
}

TreeNode * write_stmt(void)
{ TreeNode * t = newStmtNode(WriteK);
  match(WRITE);
  if (t!=NULL) t->child[0] = exp();
  return t;
}


TreeNode * exp(void)
{ 
	TreeNode * t=NULL;
	if (token==STRING)
	{
		t=string_exp();
		return t;
	}
	t = simple_exp();
	if ((token==LT)||(token==EQ)||(token==RT)||(token==RTEQ)||(token==LTEQ)) {
		TreeNode * p = newExpNode(OpK);
		if (p!=NULL) {
			p->child[0] = t;
			p->attr.op = token;
			t = p;
		}
		match(token);
		if (t!=NULL)
			t->child[1] = simple_exp();
	}
	if (token==AND) {
		TreeNode * p = newStmtNode(AndK);
		if (p!=NULL) {
			p->child[0] = t;
			p->attr.op = token;
			t = p;
		}
		match(token);
		if (t!=NULL)
			t->child[1] = bfactor();
	}
	if (token==OR) {
		TreeNode * p = newStmtNode(OrK);
		if (p!=NULL) {
			p->child[0] = t;
			p->attr.op = token;
			t = p;
		}
		match(token);
		if (t!=NULL)
			t->child[1] = bterm();
	}
	return t;
}
TreeNode * comparison_exp(void)
{ TreeNode * t = simple_exp();
if ((token==LT)||(token==EQ)||(token==RT)||(token==RTEQ)||(token==LTEQ)) {
	TreeNode * p = newExpNode(OpK);
	if (p!=NULL) {
		p->child[0] = t;
		p->attr.op = token;
		t = p;
	}
	match(token);
	if (t!=NULL)
		t->child[1] = simple_exp();
}
return t;
}
TreeNode * bfactor(void)
{
	TreeNode * t=comparison_exp();
	return t;
}
TreeNode * bterm(void)
{
	TreeNode * t=bfactor();
	if (token==AND) {
		TreeNode * p = newStmtNode(AndK);
		if (p!=NULL) {
			p->child[0] = t;
			p->attr.op = token;
			t = p;
		}
		match(token);
		if (t!=NULL)
			t->child[1] = bfactor();
	}
	return t;
}
TreeNode * bool_exp(void)
{
	TreeNode * t=bterm();
	if (token==OR) {
		TreeNode * p = newStmtNode(OrK);
		if (p!=NULL) {
			p->child[0] = t;
			p->attr.op = token;
			t = p;
		}
		match(token);
		if (t!=NULL)
			t->child[1] = bterm();
	}
	return t;
}
TreeNode * simple_exp(void)
{ TreeNode * t = term();
  while ((token==PLUS)||(token==MINUS))
  { TreeNode * p = newExpNode(OpK);
    if (p!=NULL) {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      t->child[1] = term();
    }
  }
  return t;
}

static TreeNode * string_exp(void)
{
	TreeNode * t =NULL;
	if (token==STRING)
	{
		t = newExpNode(StringK);
		t->attr.name=copyString(tokenString);
		match(token);
	}	
	return t;
}

TreeNode * term(void)
{ TreeNode * t = factor();
  while ((token==TIMES)||(token==OVER))
  { TreeNode * p = newExpNode(OpK);
    if (p!=NULL) {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      p->child[1] = factor();
    }
  }
  return t;
}

TreeNode * factor(void)
{ TreeNode * t = NULL;
  switch (token) {
    case NUM :
      t = newExpNode(ConstK);
      if ((t!=NULL) && (token==NUM))
        t->attr.val = atoi(tokenString);
      match(NUM);
      break;
    case ID :
      t = newExpNode(IdK);
      if ((t!=NULL) && (token==ID))
        t->attr.name = copyString(tokenString);
      match(ID);
      break;
	case STRING:
		t=newExpNode(StringK);
		if ((t!=NULL) && (token==ID))
			t->attr.name = copyString(tokenString);
		match(STRING);
		break;
    case LPAREN :
      match(LPAREN);
      t = exp();
      match(RPAREN);
      break;
    default:
      syntaxError("unexpected token -> ");
      printToken(token,tokenString);
	  printf("expecting->exp");
      token = getToken();
      break;
    }
  return t;
}

/****************************************/
/* the primary function of the parser   */
/****************************************/
/* Function parse returns the newly 
 * constructed syntax tree
 */
TreeNode * parse(void)
{ TreeNode * t;
  token = getToken();
  t=program();
  //declation
  //t = stmt_sequence();
  if (token!=ENDFILE)
    syntaxError("Code ends before file\n");
  return t;
}
