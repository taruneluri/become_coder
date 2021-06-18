#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mid=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid=j;
            }
        }
        swap(arr[i],arr[mid]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    selection_sort(arr,n);
    return 0;
    
}