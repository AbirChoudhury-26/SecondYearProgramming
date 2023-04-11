#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,f=1;
    cin>>a;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
         {
      f=0;
      break;
         }
    }
    if(f==1)
     cout<<"Prime- Number"<<endl;
    else 
     cout<<"Non-Prime number"<<endl;
}