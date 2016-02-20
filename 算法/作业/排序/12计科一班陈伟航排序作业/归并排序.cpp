#include<iostream>
#include<cmath>
#include<ctime>
#include<fstream>
using namespace std;
//归并排序
void mergesort(int*p,int*temp,int left, int right)
{
  	int mid=(left+right)/2;
  	if (left==right) return;
	//对左边的数列进行归并排序
  	mergesort(p, temp, left, mid);
	//对右边的数列进行归并排序
  	mergesort(p, temp, mid+1, right);
	//合并排序后的左右两数列
	for (int i=left;i<=right;i++) //复制原数组
    		temp[i]=p[i];
  	int i1=left,i2=mid+1;
  	for (int curr=left; curr<=right; curr++)
	{
    		if (i1 == mid+1)//左边的数列已经都放到数组中
				p[curr] = temp[i2++];
    		else if(i2>right)//右边的数列已经都放到数组中
				p[curr] = temp[i1++];
    		else if (temp[i1] < temp[i2])
				p[curr] = temp[i1++];
    		else p[curr] = temp[i2++];
	}
}

int main()
{
	fstream f;//用于自动写文件，不用记录数据……
	f.open("d:\\归并排序.txt",ios::out);
	f<<"数据个数	\t运行时间\n";
	srand(int(time(0)));
	for(int n=0;n<9;n++)
	{
		int base=(int)pow(10.0,n);
		for(int m=1;m<10;m++)
		{
			int length=m*base;
			if(length>100000000)return 0;//大于一亿会内存不足
			f<<length<<"\t\t";
			cout<<"数据个数："<<length<<"\t";
			int*p=new int[length];
			for(int i=0;i<length;i++){p[i]=rand();}
			//p[i]的值从0到32767
				//可以查看产生的随机整数列
				//cout<<p[i]<<" ";
			
			//cout<<endl;
			int*tmp=new int[length];
			clock_t t1=clock();
			mergesort(p,tmp,0,length-1);
			clock_t t2=clock();
			f<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
			cout<<(double)(t2-t1)/CLOCKS_PER_SEC<<"秒"<<endl;
			cout<<endl;
			delete p;
			delete tmp;
			f<<endl;
		}		
	}
	f.close();
}