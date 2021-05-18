#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos;
	cin>>n>>pos;
	if((n>>(pos-1) & 1 )== 1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
