#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(pair<int,int>&a,pair<int,int>&b)
{
    return(a.second>b.second);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    vector<pair<int,int>>vect;
     for(int i=0;i<n;i++)
     {
      cin>>arr[i];
      v.push_back(arr[i]);
     }
     int maxi=*max_element(v.begin(),v.end());
     vector<int>freq(maxi+1,0);
      for(int i=0;i<v.size();i++)
       freq[v[i]]++;
     

     for(int i=1;i<freq.size();i++){
          vect.push_back(make_pair(i,freq[i]));
     }  
    
    // sort(vect.begin(),vect.end()); // By default sort according to first
    //  for(int i=0;i<vect.size();i++)
    //   cout<<vect[i].first<<" "<<vect[i].second<<endl;
    //    cout<<endl;

    sort(vect.begin(),vect.end(),sortbysec); // made a finction in sort to sort it accordingly to second element
    for(int i=0;i<vect.size();i++)
      cout<<vect[i].first<<" "<<vect[i].second<<endl;
       cout<<endl;
}