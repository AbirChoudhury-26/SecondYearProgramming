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
            vector<int>v1;
            vector<int>v2;
           int n,m,n1,m1;
            cin>>n>>m;
         for(int i=0;i<n;i++)
         {
             cin>>n1;
              v1.push_back(n1);
         }
         for(int i=0;i<m;i++)
         {
             cin>>m1;
              v2.push_back(m1);
         }
         sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
          vector<int>v;
          vector<int>::iterator it,st;
          set_intersection(v1.begin(), v1.end(),v2.begin(),v2.end(),back_inserter(v));
                  cout<<v.size()<<endl;
       }
       return 0;
 }