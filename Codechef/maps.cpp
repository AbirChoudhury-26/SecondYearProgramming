#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    map<int,int,greater<int>>mp;
    for(int i=0;i<10;i++)
    {
       int x;
       cin>>x;
       mp[x]++;
    }
    for(auto it:mp)
     cout<<it.first<<"->"<<it.second<<endl;
    cout<<endl;
 }