#include <iostream>
#include <fstream>
#include<string>
using namespace std;

string key[17]  = {"true","false","or","and","int","bool","string","while","do","if","then","else","end","repeat","until","read","weite"};


//判断字符是否为字母
bool isLetter(char t)
{
	if((t>='a'&&t<='z')||(t>='A'&&t<='Z'))
		return true;
	else 
		return false;
}

//判断字符是否为数字
bool isNumber(char t)
{
	if(t>='0'&&t<='9')
		return true;
	else 
		return false;
}

//判断字符是否为特殊操作符
bool isSYM(char t)
{
	if(t==','||t==':'||t==';'||t=='<'||t=='>'||t=='='||t=='+'||t=='-'||t=='*'||t=='/'||t=='('||t==')'||t=='{'||t=='}')
	return true;
	else 
		return false;
}

bool isKEY(string t)
{
	for(int i=0;i<=17;i++)
	{
		if(strcmp(t.c_str(),key[i].c_str())==0)
			return true;
		else 
			return false;
	}
}
bool isdanyihao();
bool isString();

int main()
{
	char a;//记录一个字符
	string str;//收集每一个合法的字符
	ifstream in("experiment1_test1_in.txt",ios::in);
	ofstream out("out.txt",ios::out);
	
	
	while(!in.eof()&&(a=in.get()))
	{
		//letter
		if(isLetter(a))
		{
			str=a;
			while(a=in.get())
			{
				if (isLetter(a))str+=a;
		        else if(a==' ')
				{
					if(isKEY(str))
				       out<<"(KEY ，"<<str<<")";
			        else 
				       out<<"（ID ，"<<str<<")";
					in.seekg(-1,ios::cur);
				    break;
				}
				else
				{
					out<<"(WRO )";
					break;
				}

			}
			
		}
		//number
		if(isNumber(a))
		{
			str=a;
			while(a=in.get())
			{
				if(isNumber(a))str+=a;
				else if ((a==' ')||(isSYM(a)))
				{
					out<<"(NUM ,"<<str<<")";
					in.seekg(-1,ios::cur);
					break;
				}
				else
				{
					out<<"(WRO )"<<str;
					break;
				}
			}

		}
		//sym
		if(isSYM(a))
		{
			str=a;
			while(a=in.get())
			{
				if(isSYM(a))str+=a;
				else if((a=' ')||(isLetter(a))||(isNumber(a)))
				{
					out<<"(SYM ,"<<str<<")";
					in.seekg(-1,ios::cur);
					break;
				}
				else
				{
					out<<"(WRO )";
				}
			}
		}
		else
			continue;
		//string+单引号
		//非法字符
		//注释
		
	}



}