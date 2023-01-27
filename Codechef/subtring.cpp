#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    int n,m=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;s[i]!='\0';i++)
	    {
	        if(s[i]=='1')
	          m++;
	    }
        cout<<(m*(m+1))/2<<endl;
	}
	return 0;
}
