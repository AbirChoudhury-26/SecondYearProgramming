#include<iostream>
using namespace std;
int divide(int a,int b)
{
    if(a%b==0)
     return a/b;
    else
     return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b;
        cin>>a>>b;
        int ans=divide(a,b);
        cout<<ans<<endl;
        t--;
    }
}