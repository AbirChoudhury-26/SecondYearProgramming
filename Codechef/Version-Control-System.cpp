#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n,m,k,n1,m1;
         cin>>n>>m>>k;
         set<int>s;
         set<int>s1;
         for(int i=0;i<m;i++)
          {
              cin>>m1;
              s.insert(m1);
          }
           for(int i=0;i<k;i++)
           {
               cin>>n1;
              s1.insert(n1);
           }
       
    }
    return 0;
}