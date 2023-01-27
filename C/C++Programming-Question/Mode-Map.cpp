#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    map<int, int> mp;
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
     mp[a[i]]++;
    pair<int,int>mode=make_pair(0,0);
     for(auto it=mp.begin();it!=mp.end();it++)
     {
         if(it->second>mode.second)
          mode=make_pair(it->first,it->second);
     }
     cout<<mode.first<<endl;
    return 0; 
}