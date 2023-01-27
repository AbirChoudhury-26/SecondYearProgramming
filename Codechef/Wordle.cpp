#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
     {
        char a[5];
      string s,t;
      cin>>s>>t;
     for(int i=0;s[i]!='\0';i++)
     {
         if(s[i]==t[i])
          a[i]='G';
         else 
          a[i]='B';
     }
     for(int i=0;i<5;i++)
      cout<<a[i];
    cout<<endl;
    }
    return 0;
}