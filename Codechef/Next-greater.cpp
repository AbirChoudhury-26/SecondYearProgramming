#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    long long int n;
     cin>>n;
    long long int a[n],a1[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
  for(int i=n-1;i>=0;i--)
  {
      while(!s.empty() && s.top()<=a[i])
       s.pop();
     if(s.empty())
       a1[i]=-1;
     else 
      a1[i]=s.top();
    s.push(a[i]);
  }
   for(int i=0;i<n;i++)
    cout<<a1[i]<<" ";
cout<<endl;
return 0;
}