#include<iostream>
#include<string.h>
using namespace std;
class R
{public:
	char c[100];
	R operator +(R t);
	friend ostream &operator<<(ostream&out,const R&);
};
R R::operator+(R t)
{
	strcat_s(this->c,t.c);
	return *this;
}
ostream &operator<<(ostream&out,const R& t)
{
	out<<t.c<<endl;
	return out;
}
int main()
{
	R A,B;
	while(cin>>A.c)
	{
		cin>>B.c;
		cout<<A+B;
	
}
	return 0;
}

