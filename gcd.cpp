#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	while(1)
	{
		if(a<b)
		{
			swap(a,b);	
		}
		a=a-b;
		if(a==0)
		{
			break;
		}
	}
	cout<<b;
}
