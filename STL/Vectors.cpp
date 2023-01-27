#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr; //Vector declaration
    //Pushing value in vector array dynamically
    arr.push_back(0);
    arr.push_back(2);
    cout<<arr.size()<<endl;
    //Pop value from vector of last element
    arr.pop_back();
    cout<<arr.size()<<endl;
    //clear function
    arr.clear();
    cout<<arr.size()<<endl;
    vector<int>vec1(2,10);
    vec1.push_back(20);
    vec1.push_back(30);
    for(auto it:vec1)
     cout<<it<<" ";
     cout<<endl;
    vector<int>vec2(vec1.begin(),vec1.begin()+3);
      for(auto it1:vec2)
       cout<<it1<<" ";
    cout<<endl;
    //emplace_back() works same as pushback but only differnece that it take a lesser time
   //2-D vector
    vector<vector<int>>vec;
    vector<int>v1;
    v1.emplace_back(10);
    v1.emplace_back(20);
    vector<int>v2;
     v2.emplace_back(30);
     v2.emplace_back(40);
     vector<int>v3;
     v3.emplace_back(50);
     v3.emplace_back(60);
     v3.push_back(70);
    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);

    for(auto it:vec)
    { // Here 'it' is a vector of type itself
       for(auto it1:it)
        cout<<it1<<" ";
    cout<<endl;
    }
    //3-D vector
    vector<vector<vector<int>>>vec(10,vector<vector<int>>(20,vector<int>(30,0)));

}
