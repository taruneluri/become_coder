#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
fact_rec_dp(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=n*fact_rec_dp(n-1);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<fact_rec_dp(n)<<endl;
    return 0;

}
