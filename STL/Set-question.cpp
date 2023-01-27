#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        multiset<int>ms;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ms.insert(x);
        }
        for(auto it:ms) 
         cout<<it<<" ";
        cout<<endl;
return 0;
}
