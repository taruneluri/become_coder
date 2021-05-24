//printing elements no. of times repeated
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *maxi=max_element(arr,arr+n);
	int frq[*maxi + 1]={0};
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	for(int i=1;i<=*maxi;i++)
	{
		cout<<frq[i]<<" ";
	}
}
