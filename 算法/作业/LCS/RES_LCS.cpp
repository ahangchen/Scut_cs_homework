#include<iostream>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;
enum direction{CARRY,LEFT,UP,EQUAL,BEG};
void LCS(char*x,char*y,int**c,int**rec,int m,int n)
{
	for(int i=1;i<n+1;i++)
		for(int j=1;j<m+1;j++)
			if(x[j-1]==y[i-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				rec[i][j]=CARRY;
			}
			else if(c[i-1][j]>c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				rec[i][j]=UP;
			}
			else 
			{
				c[i][j]=c[i][j-1];
				rec[i][j]=LEFT;
			}			
}
int LCS(char*x,char*y,int**rec,int m,int n)
{
	if(m==0||n==0)return 0;
	if(x[m-1]==y[n-1])
	{
		rec[n][m]=CARRY;
		return LCS(x,y,rec,m-1,n-1)+1;
	}
	else 
	{
		int l1=LCS(x,y,rec,m-1,n);
		int l2=LCS(x,y,rec,m,n-1);
		if(l1<l2)
			{
				rec[n][m]=UP;
				return l2;				
			}
			else 
			{
				rec[n][m]=LEFT;
				return l1;
			}				
	}
}
void showstr(int**rec,int m,int n,char*x,char*y,string&str)
{
	if(m==0||n==0)return;
	if(rec[n][m]==CARRY)
	{
		str+=x[m-1];
		showstr(rec,m-1,n-1,x,y,str);
	}
	if(rec[n][m]==UP)showstr(rec,m,n-1,x,y,str);
	else if(rec[n][m]==LEFT)showstr(rec,m-1,n,x,y,str);
}
int main()
{
	fstream f;//用于自动写文件，不用记录数据
	f.open("d:\\res_LCS.txt",ios::out);
	f<<"序列长度	\t运行时间\n";

	//功能代码开始
	int m,n;
	//循环控制生成序列
	for(int length=1;length<100;length++)
	{
		cout<<"x序列长度"<<length<<"\t";
		cout<<"y序列长度"<<length<<"\t";
		cout<<endl;
		m=n=length;
		//初始化待比较字符串和记录矩阵
		//初始化序列
		char*x=new char[m+1];
		char*y=new char[n+1];
		srand(int(time(0)));
		for(int i=0;i<m;i++)x[i]=rand()%(m/10+3)+65;
		x[m]='\0';
		for(int i=0;i<n;i++)y[i]=rand()%(m/10+3)+65;
			y[n]='\0';
			//记录LCS矩阵
		int**c=new int*[n+1];
		for(int i=0;i<n+1;i++)
			c[i]=new int[m+1];
		for(int i=0;i<m+1;i++)
			c[0][i]=0;
		for(int i=0;i<n+1;i++)
			c[i][0]=0;
		//记录箭头转向矩阵
		int**rec=new int*[n+1];
		for(int i=0;i<n+1;i++)
			rec[i]=new int[m+1];
		for(int i=0;i<n+1;i++)
			for(int j=0;j<m+1;j++)
				rec[i][j]=BEG;
		//求LCS
		clock_t t1=clock();
		//LCS有两个重载版本，五参数为递归版本，六参数为循环版本
		int l=LCS(x,y,rec,m,n);
		clock_t t2=clock();
		//输出子序列长度
		if(l==0)cout<<"没有公共子序列\n";
		else cout<<"最长公共子序列长度为："<<l<<endl;
		cout<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
		cout<<endl;
		delete x,y;
			for(int i=0;i<n+1;i++)
				delete c[i],rec[i];
		delete	 c,rec;
		f<<length<<"\t\t";
		f<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
		f<<endl;
	}			
	f.close();
}