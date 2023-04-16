#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n;
        int count=0;
        cin>>n;
        long long int a[n];
         for(int j=0;j<n;j++)
          cin>>a[j];
         sort(a,a+n);
         for(int j=0;j<n;j++)
         {
             if(count<a[j])
              count++;
         }
         cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}