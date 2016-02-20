#include<iostream>
#include<cmath>
#include<ctime>
#include<fstream>
using namespace std;
//插入排序
void inssort(int*p,int n)
{
	for(int j=1;j<n;j++)
	{
		int key=p[j];
		int i=j-1;
		for(;i>0&&p[i]>key;i--)
			p[i+1]=p[i];
		p[i+1]=key;
	}
}

int main()
{
	fstream f;//用于自动写文件，不用记录数据
	f.open("d:\\插入排序.txt",ios::out);
	f<<"数据个数	\t运行时间\n";
	srand(int(time(0)));
	for(int n=0;n<7;n++)
	{
		int base=(int)pow(10.0,n);
		for(int m=1;m<10;m++)
		{
			int length=m*base;
			f<<length<<"\t\t";
			cout<<"数据个数："<<length<<"\t";
			int*p=new int[length];
			for(int i=0;i<length;i++)
			{
				p[i]=rand();//p[i]的值从0到32767
				//可以查看产生的随机整数列
				//cout<<p[i]<<" ";
			}
			//cout<<endl;
			clock_t t1=clock();
			inssort(p,length);
			clock_t t2=clock();
			f<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
			cout<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
			cout<<endl;
			delete p;
			f<<endl;
		}		
	}
	f.close();
}