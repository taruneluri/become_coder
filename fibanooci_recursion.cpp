#include<bits/stdc++.h>
using namespace std;
int fib_rec(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib_rec(n-1)+fib_rec(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib_rec(n-1);
    return 0;
}