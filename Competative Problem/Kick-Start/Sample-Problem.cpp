#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,sum=0;
        cin>>n>>m;
        int a[n];
         for(int i=0;i<n;i++)
         {
          cin>>a[i];
          sum+=a[i];
         }
         int ans=sum%m;
         cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}