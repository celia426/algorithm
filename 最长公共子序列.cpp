#include<iostream>
using namespace std;
char a[100],b[100];
int c[100][100];
void zcggzxl(int m,int n)
{
	for(int i=1;i<=m;i++)
		c[i][0]=0;
	for(int i=1;i<=n;i++)
		c[0][i]=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]==b[j])
				c[i][j]=c[i-1][j-1]+1;
			else if(c[i-1][j]>=c[i][j-1])
				c[i][j]=c[i-1][j];
			else
				c[i][j]=c[i][j-1];
		}
	} 
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	zcggzxl(m,n);
	cout<<c[2][3]<<endl;
	return 0;
} 
