#include<iostream>
using namespace std;
int main()
{
	int a[10][10];
	for(int i=1;i<=6;i++)
	{
		a[0][i]=0;
	}
	for(int j=0;j<=6;j++)
	{
		a[j][0]=1;
	}
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<=6;i++)
	{
		for(int j=0;j<=6;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
