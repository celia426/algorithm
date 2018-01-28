#include<iostream>
using namespace std;
int p[100],m[100][100];
void jzlc(int n)
{
	for(int i=1;i<=n;i++)
	{
		m[i][i]=0;
	}
	for(int r=2;r<=n;r++)
	{
		for(int i=1;i<=n-r+1;i++)
		{
			int j=i+r-1;
			m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
			for(int k=i+1;k<j;k++)
			{
				int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(t<m[i][j]) m[i][j]=t;
			}
		}
	} 
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>p[i]; 
	}
	jzlc(n);
	cout<<m[1][n]<<endl;
	return 0; 
} 
