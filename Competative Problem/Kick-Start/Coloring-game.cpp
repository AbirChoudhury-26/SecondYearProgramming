#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int ans=(n+3)/4;
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }
}