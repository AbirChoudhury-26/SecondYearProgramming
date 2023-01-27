#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int n;
    cout<<"Enter Vector-1 Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v1.push_back(n);
    }
    cout<<"Enter Vector-2 Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v2.push_back(n);
    }
    cout<<"Enter Vector-3 Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v3.push_back(n);
    }
    cout<<endl;
 cout<<"Vector-1 elements are: "<<endl;
  for(auto it=v1.begin();it!=v1.end();it++)
   cout<<*it<<" ";
   cout<<endl;
cout<<"Vector-2 elements are: "<<endl;
  for(auto it=v2.begin();it!=v2.end();it++)
   cout<<*it<<" ";
   cout<<endl;

cout<<"Vector-3 elements are: "<<endl;
  for(auto it=v3.begin();it!=v3.end();it++)
   cout<<*it<<" ";
   cout<<endl;
for(int i=0;i<5;i++)
 {
     if(v1[i]<v2[i])
      cout<<"Smaller"<<" ";
 }
 cout<<endl;
 for(int i=0;i<5;i++)
 {
     if(v2[i]<v3[i])
      cout<<"Smaller"<<" ";
 }
 

}