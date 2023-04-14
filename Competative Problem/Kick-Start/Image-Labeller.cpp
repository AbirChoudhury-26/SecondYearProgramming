#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   for(int i=0;i<t;i++)
   {
    int n,m,sum=0;
    cin>>n>>m;
    vector<float>vec(n);
    for(int j=0;j<n;j++)
     cin>>vec[j];
    sort(vec.begin(),vec.end());
    for(int k=2;k<=m;k++)
    {
        //sum+=vec.back();
     vec.pop_back();
    }
    
    int l=vec.size();
    cout<<l<<endl;
    for(auto it:vec)
     cout<<it<<" ";
     cout<<endl;
     cout<<vec[0]<<" "<<vec[1]<<endl;
    if(l%2==0)
    {
      // (float)sum+=((vec[l/2]+vec[(l/2)-1])/2);
        //cout<<sum<<endl;
    }
    else
     sum+=vec[(l/2)+1];
    
    cout<<"Case #"<<i+1<<": "<<sum<<endl;
   }
}