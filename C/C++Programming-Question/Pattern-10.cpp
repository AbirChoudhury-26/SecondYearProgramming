#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int z=i;
        for(int k=5;k>i;k--)
         cout<<" ";
        for(int j=1;j<=(2*i)-1;j++)
         {
            if(j<=i)
             cout<<j<<"";
            else
             {
                z--;
                cout<<z<<""; 
             }
         }
        cout<<endl;
    }    
}