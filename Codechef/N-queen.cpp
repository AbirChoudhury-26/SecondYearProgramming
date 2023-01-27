#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double x=1,ans;
        cin>>n;
        for(int i=0;i<n;i++)
        {
         x=(0.143*n)*x;
        }
        ans=x-floor(x);
         if(ans<0.5)
          cout<<floor(x)<<endl;
         else
          cout<<floor(x)+1<<endl;
    }
    return 0;
}