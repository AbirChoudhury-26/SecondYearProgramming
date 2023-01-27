#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
 for(int i=0;i<t;i++)
 {
     int n,x,coins=0,ans=0;
     cin>>n>>x;
     int a[n];
     for(int j=0;j<n;j++)
      cin>>a[j];
      sort(a,a+n,greater<>());
      
      for(int i=0;i<n;i++) //x=6 and arr after sorting = 5 4 3 1
      {
         coins=coins+a[i];
           if(coins>=x) 
           {
              ans++;
              break;
           }
            else
             ans++;
      }
      if(x>coins)
       cout<<"-1"<<endl;
     else  
      cout<<ans<<endl;
 }
 return 0;
}
