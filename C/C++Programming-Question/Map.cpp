#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
 int main()
 {
     map<int,int>mp{
         {2,5},
        {1,0},
         {4,9},
         {0,8},
         {3,7},
     };
      cout<<"Map elements are:"<<endl;
      auto it=mp.rbegin();
       cout<<it->first<<" "<<it->second;
      return 0;
 }