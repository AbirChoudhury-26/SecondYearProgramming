#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], b[3]={0};
     for(int i=0;i<n;i++)
     {
      cin>>a[i];
       b[a[i]]++;
     }
     for(int i=0;i<3;i++)
      cout<<b[i]<<" ";
   cout<<endl;
      for(int i=0;i<3;i++)
      {
        while(b[i]>0)
         {
            cout<<i<<" ";
             b[i]--;
         }
      }
  
    

}