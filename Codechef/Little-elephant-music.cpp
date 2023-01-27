#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t--)
	 {
	     ll n;
	     cin>>n;
	     vector<pair<ll,ll>>playlist(n);
	     int start=0;
	      while(n--)
	      {
	          ll band,songlen;
	          cin>> band>>songlen;
	           playlist[start]=make_pair(band,songlen);
	            start++;
	      }
	      sort(playlist.begin(),playlist.end());
	      vector<ll>bandlen;
	      ll total=0;
	      for(int i=0;i<n;i++)
	      {
	          if(i==0)
	           bandlen.push_back(playlist[i].second);
	         else if(playlist[i-1].first<playlist[i].first)
	             bandlen.push_back(playlist[i].second);
	         else
	          total+=playlist[i].second;
	      }
	      sort(bandlen.begin(),bandlen.end());
	       ll ans=0;
	       ll M=bandlen.size();
	   for(int i=0;i<M;i++)
	   {
	       ans+=(i+1)*bandlen[i];
	   }
	   ans+=M*total;
	   cout<<ans<<endl;
	 }
	return 0;
}
