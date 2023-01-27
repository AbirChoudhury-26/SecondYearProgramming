#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,f=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a,a+n);
    i=0;
    j=n-1;
    while(j>i)
    {
        if(a[i]+a[j]==x)
         {
            f=1;
            break;
         }
         else if(a[i]+a[j]>x)
          j--;
        else
         i++;
    }
    if(f==1)
     cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

}