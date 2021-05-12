#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0,r;
	cin>>n;
	while(1)
	{
		r=n%10;
		n=n/10;
		res=res+(r*r);
		if(n==0)
		{
			n=res;
			res=0;
			if(n<10)
			{
				cout<<n<<endl;
				break;
			}
		}
	
	}
	if(n==1)
	{
		cout<<"happy number"<<endl;
	}
	else
	{
		cout<<"not a happy number"<<endl;
	}
}
