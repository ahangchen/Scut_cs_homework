#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
#include<cstring>
#include<string>
#include <list>
#include <cstdlib> 
#include <sstream>  
#include <cstdio>  

using namespace std;

//Token结构定义
class Token{
public:
   string key;
   string value;
};

//Token关键字列表
Token tokenlist[36];

//初始化Token关键字列表
void tokenlist_initial()
{
	tokenlist[0].key="TK_TRUE";       tokenlist[0].value="true";
	tokenlist[1].key="TK_FALSE";      tokenlist[1].value="false";
	tokenlist[2].key="TK_OR";         tokenlist[2].value="or";
	tokenlist[3].key="TK_AND";        tokenlist[3].value="and";
	tokenlist[4].key="TK_NOT";        tokenlist[4].value="not";
	tokenlist[5].key="TK_INT";        tokenlist[5].value="int";
	tokenlist[6].key="TK_BOOL";       tokenlist[6].value="bool";
	tokenlist[7].key="TK_STRING";     tokenlist[7].value="string";
	tokenlist[8].key="TK_WHILE";      tokenlist[8].value="while";
	tokenlist[9].key="TK_DO";         tokenlist[9].value="do";
	tokenlist[10].key="TK_IF";        tokenlist[10].value="if";
	tokenlist[11].key="TK_THEN";      tokenlist[11].value="then";
	tokenlist[12].key="TK_ELSE";      tokenlist[12].value="else";
	tokenlist[13].key="TK_END";       tokenlist[13].value="end";
	tokenlist[14].key="TK_REPEAT";    tokenlist[14].value="repeat";
	tokenlist[15].key="TK_UNTIL";     tokenlist[15].value="until";
	tokenlist[16].key="TK_READ";      tokenlist[16].value="read";
	tokenlist[17].key="TK_WRITE";     tokenlist[17].value="write";
	tokenlist[18].key="TK_COMMA";     tokenlist[18].value=",";
	tokenlist[19].key="TK_SEMICOLON"; tokenlist[19].value=";";
	tokenlist[20].key="TK_ADD";       tokenlist[20].value="+";
	tokenlist[21].key="TK_SUB";       tokenlist[21].value="-";
	tokenlist[22].key="TK_MUL";       tokenlist[22].value="*";
	tokenlist[23].key="TK_DIV";       tokenlist[23].value="/";
	tokenlist[24].key="TK_LP";        tokenlist[24].value="(";
	tokenlist[25].key="TK_RP";        tokenlist[25].value=")";
	tokenlist[26].key="TK_GTR";       tokenlist[26].value=">";
	tokenlist[27].key="TK_LSS";       tokenlist[27].value="<";
	tokenlist[28].key="TK_EQU";       tokenlist[28].value="=";
	tokenlist[29].key="TK_LEQ";       tokenlist[29].value="<=";
	tokenlist[30].key="TK_GEQ";       tokenlist[30].value=">=";
	tokenlist[31].key="TK_ASSIGN";    tokenlist[31].value=":=";
	tokenlist[32].key="ID";           tokenlist[32].value="";
	tokenlist[33].key="NUM";          tokenlist[33].value="";
	tokenlist[34].key="STRING";       tokenlist[34].value="";
	tokenlist[35].key="TK_HEX";       tokenlist[35].value="";
	
}



//创建两个list容器，
//分别存储词法分析后的Token和错误信息
list<Token> TokenList;
list<string> ErrorList;

          /***********函数声明*********/
/********词法分析部分*****/
//判断是否是分隔符
int roll(char s);      
//判断字符串类型
bool Judge(string s,string substr,list<Token> &TokenList,int &flag);

/********语法分析部分*****/
int LABEL = 0 ;                       //标签号
int TEMPNUM = 0;                      //声明时用的变量号
const string TEMP_CONST = "temp";     //变量固定前缀

//生成Label
int newLabel()
{
	return LABEL++;
}


//将整型转化为String
string newTEMP()
{    
	ostringstream ss;
    ss<<TEMP_CONST<<TEMPNUM;
	TEMPNUM++;
	return ss.str();
}

//逻辑验证函数
bool E_judge(int labeltrue,int labelfalse);
//返回右式最终变量函数
string rigth_factor();
//判断是否是运算符函数
bool iscomputeOP(string key);
//识别语句函数
bool stmt(int nextLabel);
//定义语句函数
bool declaration();
//匹配括号函数
string parentheses();
//读写语句函数
bool readANDwrite();        


/********其他处理部分*****/
/*
由于最后决定从控制台来输出，
故决定舍弃该部分。
*/
//将词法分析之后的结果存入文件中
void savetotxt(list<Token> TokenList,list<string> ErrorList)
{
	ofstream outstuf;	
	outstuf.open("d:\\out.txt",ios::out);

	int i=1;
	//写入词法
	for(;TokenList.size()!=0;i++)
	{
		Token tokenlist=TokenList.front();
		TokenList.pop_front();

		outstuf<<"("<<tokenlist.key<<","<<tokenlist.value<<")"<<'\t';
		if(i%4==0)
			outstuf<<'\n';
	}

	outstuf<<'\n'<<'\n';
	//写入错误信息
	for(;ErrorList.size()!=0;)
	{
		outstuf<<ErrorList.front();
		ErrorList.pop_front();
	}

	outstuf.close();

}


//主函数部分
int main()
{
	/********词法分析部分*****/

	//初始化Token关键字列表
	tokenlist_initial();
	//把数据从文本中载入程序
	char s[80];
	ifstream instuf;

	//从文件中读出所要分析的代码
	instuf.open("d:\\experiment2_test1_in.txt",ios::in);  //以读的方式打开代码信息文件
//	instuf.open("d:\\experiment2_test2_in.txt",ios::in);  //以读的方式打开代码信息文件
	
	int flag=0;    //记录行号
	
	while(instuf.getline(s,80))
	{
		flag++;             //行号+1
		string substr="";
		int i=0;
		int length=strlen(s);
	
		while(i<length)
		{
			if(i==length-1||roll(s[i])!=0)//roll 判断是否是归约字符
			{ 
				//最后一个字符串，单独判断
				if(i==length-1&&roll(s[i])==0)
					substr+=s[i];
				if( roll(s[i])==2&&substr=="")     //判断终结符
					substr+=s[i];
				else if(roll(s[i])==2&&substr!="")
					i--;
				else if(roll(s[i])==1&&substr=="")			
				    {i++;continue;}


				if(Judge(s,substr,TokenList,i)==false)
				{
					string error;
					char sflag[20];
					itoa(flag,sflag, 10); //最后一个参数是将数字转换成哪种进制
					error.append("line "+(string)sflag+"“"+substr+"”error！\n");
					cout<<error;
					ErrorList.push_back(error);
					substr="";
				}
                substr="";
				i++;
			}
			
			else
			{
				substr+=s[i++];
			}
		}
	}
	instuf.close();

    //如果出现词法错误，直接返回，不再进行语法分析
	if(ErrorList.size()>0)
		return 0;

	//存入文件中
	//savetotxt(TokenList,ErrorList);

	/********语法分析部分*****/
	while(TokenList.size() !=0)
	{
		stmt(-1);        //进行语法分析
	}
}



              /*********具体函数定义****/

/********词法分析部分*****/

//判断是否是分隔符
int roll(char s)
{
	if(s==' '||s=='\t'||s=='\n')
		return 1;
	for(int i=18;i<=31;i++)
		if(s==tokenlist[i].value[0])
			return 2;
	return 0;
}

//判断字符串类型
bool Judge(string s,string substr,list<Token> &TokenList,int &flag)
{
	int i=0;
	for(;i<=25;i++)
		if(substr.compare(tokenlist[i].value)==0)   //判断常规类型
		{
			TokenList.push_back(tokenlist[i]);   //加入List
			return true;
		}

	string sflag;
	if(s[flag+1]=='=')
		{
			sflag=substr+s[flag+1];
			for(i=29;i<=31;i++)
				if(sflag.compare(tokenlist[i].value)==0)   //判断双运算符类型
				{
					TokenList.push_back(tokenlist[i]);   //加入List
					flag++ ;
					return true;
				}
	}
	else
		{
			sflag=substr;
			for(i=26;i<=28;i++)
				if(sflag.compare(tokenlist[i].value)==0)   //判断双运算符类型
				{
					TokenList.push_back(tokenlist[i]);   //加入List
					return true;
				}
	}


	//判断是否是数字
	for(i=0;i<substr.length();)
	{
		if(substr[i]>='0'&&substr[i]<='9')
			i++;
		else
			break;
	}
	if(i==substr.length())
	{
		tokenlist[33].value=substr;
		TokenList.push_back(tokenlist[33]);   //加入List
		return true;
	}

	//判断是否是十六进制数
	if(substr[0]=='0'&&(substr[1]=='x'||substr[1]=='X'))
	{
		//判断是否是十六进制数字
		for(i=2;i<substr.length();)
		{
			if((substr[i]>='0'&&substr[i]<='9')||
			   (substr[i]>='a'&&substr[i]<='f')||
			   (substr[i]>='A'&&substr[i]<='F'))
				i++;
			else
				break;
	     }
		if(i==substr.length())
		{
			tokenlist[35].value=substr;
			TokenList.push_back(tokenlist[35]);   //加入List
			return true;
		}
	}

	//判断是否是标识符
	for(i=0;i<substr.length();)
	{
		if((substr[i]>='0'&&substr[i]<='9')||
		   (substr[i]>='a'&&substr[i]<='z')||
		   (substr[i]>='A'&&substr[i]<='Z'))
			i++;
		else
			break;
	}
	if(i==substr.length())
	{
		tokenlist[32].value=substr;
		TokenList.push_back(tokenlist[32]);   //加入List
		return true;
	}


	//判断是否是字符串
	if(substr[0]=='\'')
	{
		for(i=substr.length()-1;substr[i]!='\''&&i<s.length()-flag;i++)
			substr+=s[flag++];
		if(substr[substr.length()-1]=='\'')
		{
			tokenlist[34].value=substr;
			TokenList.push_back(tokenlist[34]);   //加入List
			flag++;
			return true;
		}
	}

	//判断是否是注释
	if(substr[0]=='{')
	{
		for(i=substr.length()-1;substr[i]!='}'&&i<s.length();i++)
			substr+=s[flag++];
		if(substr[substr.length()-1]=='}')
		{
			return true;
		}
	}

	//错误
	return false;

}


              /********语法分析部分*****/
//判断是否是运算符
bool iscomputeOP(string key)
{
	bool flag = false;
	for(int i = 20 ;i <= 23 ;i++)
	{
		if(key.compare(tokenlist[i].key ) == 0) 
		{
			flag = true;
			break;
		}
	}
	return flag;
}

//括号匹配函数
//检查到是一个左括号时调用，别把左括号pop了 返回最后的变量
string parentheses()
{
	if(TokenList.front().value == "(" ) //删除左括号
		TokenList.pop_front();

     string lasttemp = rigth_factor();  //记录括号中表达式
	 
	 if(TokenList.front().value == ")" )//删除右括号
        TokenList.pop_front();
	 else
	  {
		  cout<<"我的）呢？还我！"<<endl;
          exit(0);
	  }
	 
	 return lasttemp; 
}

//返回右式最终变量
string rigth_factor()
{  
	Token i = TokenList.front();
	string lastTEMP;

	if(i.key == "ID"|i.key == "NUM" )
	{
	  lastTEMP=i.value ;
      TokenList.pop_front();
	}
	else if(i.value=="(")         //左括号
	{
		lastTEMP = parentheses();
	}
    
	string text;                  //记录分析后内容

	//遇到运算符
	while(TokenList.size()>0 &&iscomputeOP(TokenList.front().key))
	{
		i = TokenList.front();
		TokenList.pop_front();
		Token j = TokenList.front();
        string newtemp = newTEMP();
		string exp;                //操作数
		if(j.value=="(")
		{ 
			exp = parentheses();
		}
		else if(j.key == "ID"|j.key == "NUM")
		{
			exp = j.value;
		    TokenList.pop_front();
		}
		else 
		{
			cout<<"表达式错误"<<lastTEMP<<"后面出现非法符号"<<endl;
			exit(0);
		}

	   cout<<newtemp <<" := "<< lastTEMP <<i.value <<exp<<endl;

       lastTEMP = newtemp;
	}
    return lastTEMP;
}


//定义语句结束符“;”
bool declaration()
{
	while (TokenList.front().value != ";" )
	{
		TokenList.pop_front();
	}
    
	TokenList.pop_front();    //把分号也删了

	return true;
}


//读写赋值语句
bool readANDwrite()
{    
	string text = TokenList.front().value;
	TokenList.pop_front();       //去掉read | write
    Token c;

	while(TokenList.size() > 0 &&(c=TokenList.front()).value!= ";")
	{
		if(c.value == ",")
		{
			TokenList.pop_front();//铲除这个 ","
			continue;
		}
		else if(c.key == "ID" )
		{
			TokenList.pop_front();
			cout<<text<<" "<<c.value<<endl;
		}
		else 
		{
			break;//是其他人的了，砸门别管
		}
	}

	return true;
}

//逻辑验证部分
bool E_judge(int labeltrue,int labelfalse)
{   
	string text="";      //存储分析后信息
    int label1;
	int label2;

	Token i = TokenList.front();    //读出Token

	if (i.key == "ID"|i.key=="NUM") // 第一个字符是id
	{
		TokenList.pop_front();
		text += i.value;
	}
	else if(i.value== "(" )     //第一个字符是“（”
	{
		text += parentheses();
	}
     else if(i.key == "TK_NOT") //第一个字符是 not 
	 { 
		text += i.value;
		i = TokenList.front();
       	TokenList.pop_front();
	}
	//PART ONE OVER  已经把逻辑符号左边的搞掂

	/******开始验证逻辑运算符******/
	Token j = TokenList.front();
    TokenList.pop_front();

	bool flag = false;
    for(int k = 26;k <= 30 ; k ++)   //判断符号
	{
		if(j.key ==tokenlist[k].key ) 
		{
			flag = true ;
			break;
		}
	}

	//如果不正确，直接退出
	if (!flag )
		exit(1);

	text += j.value;

   /******验证逻辑运算符结束******/


	j = TokenList.front();

        
	/*****运算符右边的*****/
	if (j.key == "ID"|j.key=="NUM") // 第一个字符是id或数字
	{
		TokenList.pop_front();
		text += j.value;
	}
	else if(j.value== "(" )        //第一个字符是 （
	{
		text += parentheses();
	}
	else
	{
          return false;
	} 


	if(TokenList.size() == 0 )
	{
		label1 = labeltrue;
		label2 = labelfalse;
        cout<<"if "<<text <<" GOTO  Label "<<label1<<endl<<"GOTO Label "<<label2<<endl;
	    return true;
	}

    /***************if之后********************/
	if ((j=TokenList.front()).value == "and")
	{
		TokenList.pop_front();
		label1 = newLabel();
		label2 = labelfalse;
		cout<<"if "<<text <<" GOTO  Label "<<label1<<endl<<"GOTO Label "<<label2<<endl;
		cout<<"Label "<<label1<<endl;

	    return E_judge(labeltrue , labelfalse);   //递归
	}
	else if((j=TokenList.front()).value == "or")
	{
		TokenList.pop_front();
        label1 = labeltrue;
		label2 = newLabel();
	 			
		cout<<"if "<<text <<" GOTO  Label "<<label1<<endl<<"GOTO Label "<<label2<<endl;
		cout<<"Label "<<label2<<endl;
		return E_judge(labeltrue , labelfalse);
	}
	else 
	{
		label1 = labeltrue;
		label2 =labelfalse;
       	cout<<"if "<<text <<" GOTO  Label "<<label1<<endl<<"GOTO Label "<<label2<<endl;
		return true;
	}
	
	return false;

}



bool stmt(int nextLabel)
{
    Token current = TokenList.front();

/*	if-stmt -> if  logical-or-exp then stmt-sequence [else stmt-sequence] end*/
	if( current.key=="TK_IF" )
	{
		TokenList.pop_front();
		int labeltrue;
		int labelfalse;
        int labelend;

		labeltrue  = newLabel();
        labelfalse = newLabel();
        labelend   = newLabel();

		E_judge(labeltrue,labelfalse);

		if(TokenList.size() > 0&&
		   TokenList.front().key == "TK_THEN")
		   TokenList.pop_front();
          cout<<"Label "<<labeltrue<<endl;

		  while(TokenList.size() > 0&&
			    TokenList.front().key!="TK_END"&&
			    TokenList.front().key!="TK_ELSE")//STMT - SEQUENCE
		  {
		      stmt(-1);
		  }
		 

		if(TokenList.size() > 0&&TokenList.front().key == "TK_ELSE")//有else 
		{   
			cout<<"GOTO Label "<<labelend<<endl;//做完then, 去结尾
            cout<<"Label "<< labelfalse<<endl;

			TokenList.pop_front();			
			
		    while(TokenList.front().key!="TK_END")//STMT - SEQUENCE
		    {
			   stmt(-1);
		    }

			TokenList.pop_front();
            cout<<"Label "<<labelend<<endl;
		}
		else //没有else
		{
             cout<<"Label "<<labelfalse<<endl;
			 if(TokenList.size() > 0) 
			    TokenList.pop_front();
			 else
			 {
				 cout<<"end 在哪里？"<<endl;
			 }
		}		
	}

	else if(current.key=="ID")//ASSIGN STSM
	{   
		string text = current.value;
		TokenList.pop_front();
		Token i = TokenList.front();

		if( i.key =="TK_ASSIGN"){ 
			text += i.value;
			TokenList.pop_front();
		}
		else {
			cout<<"赋值语句错误"<<endl;
			exit(0);
		}//error

		text+=rigth_factor();
		cout<<text<<endl;
		if(TokenList.size() > 0 && TokenList.front().value == ";")//消除分号
			TokenList.pop_front();
	}

/*	while-stmt -> while logical-or-exp do stmt-sequence end*/
	else if (current.key=="TK_WHILE")
	{
         TokenList.pop_front();
		 int labelbegin;
		 int labeldo;
		 int labelend;

		 labelbegin = newLabel();
		 labeldo    = newLabel();
		 labelend   = newLabel();

        
         cout<<"Label "<<labelbegin<<endl;//开始标记
		 E_judge(labeldo,labelend);//逻辑部分
         cout<<"Label "<<labeldo<<endl;//循环体开始标记

		 if(TokenList.front().key == "TK_DO")//去掉do
		 {
			 TokenList.pop_front();
		 }
		 else                        //没有do 怎么行？
		 {
			  cout<<"怎么没有do 的？"<<endl;
			  exit(1);
			
		 }

		   while(TokenList.front().key!="TK_END")//STMT - SEQUENCE
		  {
		      stmt(-1);
		  }

		   if(TokenList.front().key == "TK_END")//去掉END
			   TokenList.pop_front();

		   cout<<"GOTO Label "<<labelbegin<<endl; //回到开始，再次进行判定
		
	     cout<<"Label "<<labelend<<endl;        //结尾标识
	}

	/*	repeat-stmt	-> repeat stmt-sequence until logical-or-exp*/
	else if (current.key=="TK_REPEAT")
	{
         TokenList.pop_front();
		 int labelbegin;
		 int labelend;

		 labelbegin = newLabel();
		 labelend   = newLabel();

         cout<<"Label "<<labelbegin<<endl;
		 
		 while(TokenList.front().key!="TK_UNTIL")//STMT - SEQUENCE
		  {
		      stmt(-1);
		  }

		   if(TokenList.front().key=="TK_UNTIL"){//去掉 until
			   TokenList.pop_front();
		   }
		   else {
			   cout<<"怎么没有until 的？？"<<endl;
			   return false;
		   }

		 E_judge(labelend,labelbegin);

	     cout<<"Label "<<labelend<<endl;

	}
	else if (current.key=="TK_INT"|current.key=="TK_STRING"|current.key=="TK_BOOL")
	{
		declaration(); // 处理赋值语句
	}
	else if (current.key =="TK_READ"|current.key == "TK_WRITE")
	{
          readANDwrite();

	}
	else //出错了
	{
		cout<<"遇到无法识别的标识"<<current.value<<endl;
		cout<<"句子结构错误，退出"<<endl;
		exit(0);
	}

	if( nextLabel!= -1 )
		cout<<"GOTO Label "<< nextLabel<<endl;

	if(TokenList.size() >0 &&TokenList.front().value == ";")//消除分号
			TokenList.pop_front();

	return true;
}


