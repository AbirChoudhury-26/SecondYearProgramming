#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,num,count=0;
        cin>>n>>k;
        int s[n];
         for(int i=0;i<n;i++)
          cin>>s[i];
        sort(s,s+n,greater<int>());
        num=s[k-1];
        for(int i=0;i<n;i++)
        {
            if(s[i]>=num)
             count++;
            else
             break;
        }
        cout<<count<<endl;
    }
    return 0;
}