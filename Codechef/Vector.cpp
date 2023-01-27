#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int main()
 {
int t;
 cin>>t;
  while(t--)
  {
      set<int>s;
      vector<int>v1;
      vector<int>v2;
      int n,num;
       cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>num;
          s.insert(num);
     }
    for(auto it=s.begin();it!=s.end();it++)
    {
        if(*it>=0)
          v1.push_back(*it);
        else
         v2.push_back(*it);
    }
    cout<<accumulate(v1.begin(),v1.end(),0)<<" "<<accumulate(v2.begin(),v2.end(),0);
    cout<<endl;
  }
  return 0;
 }