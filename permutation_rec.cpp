#include<bits/stdc++.h>
using namespace std;
void print_per(int n,string s,int vis[],string ss="")
{
   if(ss.length()==s.length())
   {
      cout<<ss<<endl;
      return;
   }
   for(int i=0;i<n;i++)
   {
      if(vis[i]==0)
      {
         vis[i]=1;
         print_per(n,s,vis,ss+s[i]);
         vis[i]=0;
      }
   }
}
int main()
{
   string s;
   cin>>s;
   int n=s.length();
   int arr[n];
   for(int i=0;i<n;i++)arr[i]=0;
   print_per(n,s,arr);
   return 0;
   
}