#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,po,re;
	cin>>n;
	cin>>po;
	re=n ^ (1 << (po-1));
	cout<<re;
}
