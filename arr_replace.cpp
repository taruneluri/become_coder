#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter position & enter element"<<endl;
    int ele,pos,ind,j;
    cin>>pos>>ele;
    ind=pos-1;
    for(j=n-1;j>=ind;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[j+1]=ele;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }    

}