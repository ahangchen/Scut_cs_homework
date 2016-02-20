#include<iostream>
using namespace std;
int n,m;
struct step
{
	int height;
	int max;
};

void findmax(step**p,int n,int m)
{
	int dept[4][2]={-1,0,0,-1,1,0,0,1};
	if(p[n-1][m].height>p[n][m].height&&p[n][m-1].height>p[n][m].height&&p[n][m+1].height>p[n][m].height&&p[n][m+1].height>p[n][m].height)
		p[n][m].max=1;
	else 
	{
		for(int i=0;i<4;i++)
		{
			if(p[n+dept[i][0]][m+dept[i][1]].max==0&&p[n+dept[i][0]][m+dept[i][1]].height!=0)
			{
				findmax(p,n+dept[i][0],m+dept[i][1]);
				if(p[n+dept[i][0]][m+dept[i][1]].max>p[n][m].max)
					p[n][m].max=1+p[n+dept[i][0]][m+dept[i][1]].max;
			}
		}
	}
}


int main()
{
	int t;	
	step**p;
	cin>>t;
	while(t>0)
	{
		int t_max=0;
		cin>>n>>m;
		p=new step*[n+2];
		for(int i=0;i<=n+1;i++)
		{
			p[i]=new step[m+2];
		}
		for(int i=0;i<=n+1;i++)
			for(int j=0;j<=m+1;j++)
			{
				p[i][j].height=0;
				p[i][j].max=0;
			}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>p[i][j].height;
				p[n][m].max=0;
			}
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				if(p[n][m].max==0)
				{
					findmax(p,n,m);
					if(p[n][m].max>t_max)
						t_max=p[n][m].max;
				}
				else 
				{
					if(p[n][m].max>t_max)
						t_max=p[n][m].max;
				}
			}
		}
		t--;
	}
}



	

			

