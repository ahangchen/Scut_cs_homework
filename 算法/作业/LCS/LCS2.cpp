#include<iostream>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;
//定义枚举对象来记录找LCS过程中箭头的方向
enum direction{CARRY,LEFT,UP,EQUAL,BEG};

void LCS(char*x,char*y,int**c,int**rec,int m,int n)//rec记录箭头方向
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
//根据箭头方向逆序添加LCS序列
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
	int m,n;
	cout<<"x序列长度：";
	while(cin>>m)
	{
		cout<<"y序列长度：";
		cin>>n;
		char*x=new char[m+1];
		char*y=new char[n+1];
		
		int**c=new int*[n+1];
		for(int i=0;i<n+1;i++)
			c[i]=new int[m+1];
		for(int i=0;i<m+1;i++)
			c[0][i]=0;
		for(int i=0;i<n+1;i++)
			c[i][0]=0;
		int**rec=new int*[n+1];
		for(int i=0;i<n+1;i++)
			rec[i]=new int[m+1];
		for(int i=0;i<n+1;i++)
			for(int j=0;j<m+1;j++)
				rec[i][j]=4;

		/*srand(int(time(0)));
		for(int i=0;i<m;i++)x[i]=rand()%(m/10+3)+65;
		x[m]='\0';
		for(int i=0;i<n;i++)y[i]=rand()%(m/10+3)+65;
		y[n]='\0';*/
		
		for(int i=0;i<m;i++)cin>>x[i];
		for(int i=0;i<n;i++)cin>>y[i];
		clock_t t1=clock();
		int l=LCS(x,y,rec,m,n);
		//如果是循环，则为
		//LCS(x,y,c,rec,m,n);	
		//l=c[n][m];
		clock_t t2=clock();
		cout<<endl;

		//输出子序列长度
		if(l==0)cout<<"没有公共子序列\n";
		else cout<<"最长公共子序列长度为："<<l<<"，即：";		
		string str;
		showstr(rec,m,n,x,y,str);
		//逆序输出记录下来的逆序子序列
		for(int i=str.length()-1;i>=0;i--)
			cout<<str[i];
		cout<<endl<<endl;
		delete x,y,c,rec;
		cout<<"x序列长度：";
		}
}