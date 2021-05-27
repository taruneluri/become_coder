#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele,j,flag=0;;
    cout<<"enter element to be deleted"<<endl;
    cin>>ele;
    for(j=0;j<n;j++)
    {
        if(arr[j]==ele)
        {
            for(int i=j+1;i<n;i++)
            {
                arr[i-1]=arr[i];
            }
            n--;
            flag=1;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }   
        }
    }
    if(flag!=1)
    {
        cout<<"element not found";
    }
}