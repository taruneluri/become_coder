#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ve;
    ve.push_back(10);
    ve.push_back(20);
    ve.emplace_back(30);
    for(int i=0;i<ve.size();i++) //{10,20,30}
    {
        cout<<ve[i]<<endl;
    }
    vector<int>vel(5); 
    for(vector<int>::iterator it=vel.begin();it!=vel.end();it++)
    {
        cout<<*it<<" ";
    }
    for(auto it=ve.begin();it!=ve.end();it++)
    {
        cout<<*it<<" ";
    }
    for(auto it:ve)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>arr{1,2,3,4,5,6};
    vector<int>::iterator it;
    int x=6;
    it=find(arr.begin(),arr.end(),x);
    cout<<*it<<endl;
    cout<<it-arr.begin();

}