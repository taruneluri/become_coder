#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=1;
            cout<<-1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"sorted"<<endl;
    }
}