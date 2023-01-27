#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
           cin>>a[i];
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-i-1])
             f=0;
             if(i!=0)
             {
                 if(a[i]-a[i-1]>1)
                  f=0;
             }
        }
        if(a[0]!=1 || a[n/2]!=7)
         f=0;
        if(n%2==1)
         if(a[n/2]-a[n/2-1]>1)
          f=0;
        if(f==1)
         cout<<"yes"<<endl;
        else 
         cout<<"no"<<endl;
     }
     return 0;
}