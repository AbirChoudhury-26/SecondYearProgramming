#include<iostream>
using namespace std;
int main()
{
    int t;
     cin>>t;
      for(int j=1;j<=t;j++)
      {
       long long int n,m;
       int ans=0;
           cin>>n>>m;
      long long int c[n];
       for(int i=0;i<n;i++)
       {
           cin>>c[i];
            ans+=c[i];
       }
       ans=ans%m;
        cout<<"Case #"<<j<<": "<<ans<<endl;
        }
    return 0;
}