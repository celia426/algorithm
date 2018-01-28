#include<iostream>
using namespace std;
int maxint=0x3f3f3f3f;
int c[110][110];
void prim(int n)
{
	int low[110],close[110];
	bool s[110];
	s[1]=true;
	for(int i=2;i<=n;i++)
	{
		low[i]=c[1][i];
		close[i]=1;
		s[i]=false;
	}
	int ans=0;
	for(int i=1;i<n;i++)
	{
		int t=maxint;
		int u=1;
		for(int j=2;j<=n;j++)
		{
			if(low[j]<t&&!s[j])
			{
				t=low[j];
				u=j;
			}
		}
		ans+=t;
		s[u]=true;
		for(int j=2;j<=n;j++)
		{
			if(c[u][j]<low[j]&&!s[j])
			{
				low[j]=c[u][j];
				close[j]=u;
			}
		}
	}
	cout<<ans<<endl; 
 } 
 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		for(int j=1;j<=n;j++)
 		{
 			cin>>c[i][j];
		 }
	 }
 	prim(n);
 	return 0;
 }
