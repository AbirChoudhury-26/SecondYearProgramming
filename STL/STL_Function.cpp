#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5>arr={1,2,3,4,5};
    //print elements using iterator 
    for(auto it=arr.rbegin();it!=arr.rend();it++) //it return a pointer,therefore we use * to get value on the address
    {
     cout<<*it<<" ";
    }
    cout<<endl;
    //locate the value at a particular index
       cout<<arr.at(4)<<endl;
       for(auto it:arr) //it return the value directly
        cout<<it<<" ";
    cout<<endl;
    string s="abir";
    for(auto it:s)
     cout<<it<<endl;
     //finding size;
     cout<<arr.size()<<endl;
     //finding front and back values only using function
     cout<<arr.front() <<" "<<arr.back()<<endl;
    cout<<endl;
    return 0;
}