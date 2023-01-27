#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=1;
    int a[n];
     stack<ll>st;
      for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        while(st.size() && a[st.top()]>=a[i])
         st.pop();
        if(st.size())
         ans=ans*(st.top()-i+1);
        st.push(i);
    }
    cout<<ans<<endl;
    return 0;
}