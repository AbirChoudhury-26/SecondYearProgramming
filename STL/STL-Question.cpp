#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0,x;
        cin>>n;
        map<int,int>mp;
         for(int i=0;i<n;i++)
         {
    
            cin>>x;
            mp[x]++;
             if(mp[x]>mp[max])
              max=x; 
         }
         cout<<max<<endl;
    }
}