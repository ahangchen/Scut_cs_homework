#include<iostream>
#include<iomanip>
using namespace std;
void max(double &w,double &h)
{
	if(w>=h) return;
	else 
		{double t;
	t=w;w=h;h=t;return;}
}
void max1(double &v,double &v1,double& v2)
{
	v=v>v1?v>v2?v:v2:v1>v2?v1:v2;
}
struct Node
{
	double v;
	Node *next;
};
void create(Node *&head,double v)
{
	Node *s,*p;
	s=new Node;
	s->v=v;
	if (head==NULL) head=s;
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=s;
	}
	s->next=NULL;
}
int main()
{
	Node *head=NULL;
	double w,h,x,y,v1,v2,v3,v4,v5,v6,v;
	const double pi=3.141592653;
	cin>>w>>h;
	while(!(w==0,h==0))
	{
		v1=0;v2=0;v3=0;v4=0;v5=0;v6=0;v=0;
	max(w,h);
	x=w/3;
	y=w-2*x;
	if((h>2*x||h==2*h)&&h-2*pi*x>1e-8)
		v=pi*x*x*y;
	if(h>2*x&&y-2*pi*x>1e-8)
		v6=pi*x*x*h;
	x=w/(2+2*pi);
	y=w-2*x;
	if(h>2*x||h==2*h)
		{
			v1=pi*x*x*h;
			if(h-2*x*pi>1e-8)
				v2=pi*x*x*y;
	    }
	x=h/2;
	y=w-2*x;
	if(y-2*x*pi>1e-8)
		v3=pi*x*x*h;
	x=h/2/pi;
	y=w-2*x;
	if(y>1e-8)
		{
			v4=pi*x*x*y;
			if(h-2*pi*x>1e-8)
				v5=pi*x*x*h;
	     }
	max1(v,v1,v2);
	max1(v3,v4,v5);
	v=v>v3?v:v3;
	v=v>v6?v:v6;
	create(head,v);
	cin>>w>>h;
	}
    while(head)
	{
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<head->v<<endl;
	head=head->next;
}

}		

