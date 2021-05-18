#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0,n;
	cin>>n;
	while(n!=0)
	{
		if(n&1==1)
		{
			count++;
		}
		n=n>>1;
	}
	cout<<count;
	
}
