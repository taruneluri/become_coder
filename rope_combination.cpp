#include<bits/stdc++.h>
using namespace std;
int max_var=0;
int print(int ind,int n,int N,vector<int> &v,int a[])
{
    int result;
    if(ind==n)
    {
        if(N==0)
        {
            result=v.size();
            max_var=max(max_var,result);
        }
    }
    else{
        if(a[ind]<=N)
        {  
        v.push_back(a[ind]);
        print(ind,n,N-a[ind],v,a);
        v.pop_back();
        }
        print(ind+1,n,N,v,a);    
    }
    return max_var;
}
int main()
{
    int n,N;
    cin>>N>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    cout<<print(0,n,N,v,arr);
    return 0;
}