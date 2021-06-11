#include<bits/stdc++.h>
using namespace std;
void sum_sub_array(int arr[],int n,int t)
{
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++)
    {
        int sum=0;
        for(int k=i;k<=j;k++)
        {
            cout<<arr[k]<<" ";
            sum=sum+arr[k];
        }
        if(sum==t)
        {
            cout<<" : yes ";
        }
        cout<<endl;
    }

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    sum_sub_array(arr,n,t);
}