#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,r;
        cin>>l>>r;
        int n=min(l,r);
        int ans=(n*(n+1))/2;
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}