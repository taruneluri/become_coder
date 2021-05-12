#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,i;
	cin>>n;
	for(i=2;i<(sqrt(n)+1);i++)
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
