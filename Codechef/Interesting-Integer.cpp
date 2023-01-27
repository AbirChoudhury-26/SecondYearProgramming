#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       long long int a,b,count=0;
       cin>>a>>b;
       for(int j=a;j<=b;j++)
       {
          int num=j;
           int sum=0,mul=1;
            while(num>0)
            {
                sum+=num%10;
                mul*=num%10;
                num/=10;
            }
        if(mul%sum==0)
         count++;
       }
       cout<<"Case #"<<i<<": "<<count<<endl;
    }
}