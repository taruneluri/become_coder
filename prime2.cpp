#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,count=0;
	cin>>n;
	for(i=2;i<((n/2)+1);i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not a prime number";
	}
	
}
