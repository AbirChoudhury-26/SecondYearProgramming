#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={1,2,3,4,5,6,7},n=7,d=4; //3 4 5 6 7 1 2
    for(int i=0;i<n;i++)
    {
        a[i]=(a[i]+d)%7;
      if(a[i]==0)
       a[i]=7;
    }
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}