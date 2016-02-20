#include<iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int**m;
int r,c;
int dp[200][200];
int dfs(int i,int j)
{
	int ans=m[i][j];
	if(dp[i][j]!=0) return dp[i][j];
	if(i<r&&j<c) 
	{
		ans=max(dfs(i,j+1)+m[i][j],dfs(i+1,j)+m[i][j]);
	}

	if(i==r&&j<c-1)  return m[i][j+1]+m[i][j];
	if(i<r-1&&j==c)  return m[i+1][j]+m[i][j];
	if(i==r&&j==c-1) return m[r][c]+m[i][j];
	if(i==r-1&&j==c) return m[r][c]+m[i][j];
	if(i==r&&j==c) return m[i][j];
	dp[i][j]=ans;
	return ans;
}

int main()
{
	int t;
	int max=0;
	cin>>t;
	while(t)
	{
	cin>>r>>c;
	m=new int*[r+1];
	for(int i=1;i<r+1;i++)
	{
		m[i]=new int[c+1];
	}
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++)
			cin>>m[i][j];
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++)
			dp[i][j]=0;
	cout<<dfs(1,1);
	t--;
	}
	
}