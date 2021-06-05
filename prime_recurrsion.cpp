#include<bits/stdc++.h>
using namespace std;
bool prime(int n ,int i=2)
{
    if(n==2)
    {
        return true;
    }
    if(n<=1)
    {
        return false;
    }
    if(n%i==0)
    {
        return false;
    }
    if(i*i > n)
    {
        return true;
    }
    return(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<prime(n);
    return 0;
}