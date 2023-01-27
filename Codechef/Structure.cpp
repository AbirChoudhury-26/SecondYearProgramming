#include<bits/stdc++.h>
#include<iostream>
 using namespace std;

 int main()
{
    int n,amount=0;
    cin>>n;
    string s;
    map<string,int>m;
    cout<<"Items"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>s>>amount;
      cout<<s<<amount<<endl;
      amount+=amount;
       m[s]++;
    }
    for(auto it:m)
    cout<<it.first<<"-"<<it.second<<endl;
cout<<amount<<endl;
}