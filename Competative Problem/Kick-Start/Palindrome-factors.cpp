#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rev(int n,int temp)
{
    if(n==0)
     return temp;
    temp=(temp*10)+(n%10);
     return rev(n/10,temp);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,count=0;
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            if(a%j==0)
             {
                 int temp=rev(j,0);
                  if(temp==j)
                   count++;
             }
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}