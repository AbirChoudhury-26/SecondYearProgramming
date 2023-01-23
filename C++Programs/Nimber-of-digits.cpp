#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,mod=0,odd=0,even=0,dis,final;
    cin>>n;
    int num=n;
    while(num!=0)
    {
        mod+=(num%10);
        int mod1=(num%10);
        num/=10;
        count++;
        if(mod1%2==0)
         even+=mod1;
        else 
         odd+=mod1;
    }
    if(odd<15){
        n=n-((odd*n)/100);
        // final=n-dis;
        cout<<n;
        }
    else{
        dis=(15*n)/100;
        final=n-dis;
        cout<<final;
    }
}