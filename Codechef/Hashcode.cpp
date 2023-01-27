#include <bits/stdc++.h>
#define ll long double 
using namespace std;
int main(){
  ll people,projects;
  cin>>people>>projects;
  map<string,vector<pair<string,ll>>>mapi;
  for(ll i = 0;i<people;i++){
    string name; ll skillnum;
    cin>>name>>skillnum;
    while(skillnum--){
      string skillname;ll level;
      cin>>skillname>>level;
      mapi[name].push_back(make_pair(skillname,level));
    }
  }
  cout<<"--------------------------------------"<<endl;
  for(auto& it : mapi){
    vector<pair<string,ll>> v= it.second;
    cout<<it.first<<endl;
    for(auto& jt : v ){
      pair<string,ll> p = jt;
      cout<<p.first<<" "<<p.second<<endl;
    }
  }
  return 0;
}
