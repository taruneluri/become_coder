#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp, res, r,sum=0,count=0;
	cin>>n;
	temp=n;
	res=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<count<<endl;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+pow(r,count);
		temp=temp/10;
	}
	cout<<sum<<endl;
	if(sum==res)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"not a armstrong"<<endl;
	}
	
	
}
