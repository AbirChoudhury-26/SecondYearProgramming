#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
        float ans;
	   deque<int>dq(n);
       for(int i=0;i<n;i++)
        cin>>dq[i];
    sort(dq.begin(),dq.end());
    while(k>0)
     {
        dq.pop_front();
        dq.pop_back();
        k--;
     }
     ans=(float)accumulate(dq.begin(),dq.end(),0)/dq.size();
     cout<<fixed<<setprecision(6)<<ans<<endl;
	}
	return 0;
}
