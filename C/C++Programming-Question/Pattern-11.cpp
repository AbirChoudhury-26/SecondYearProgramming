#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        if(i<=(7/2)+1)
        {
           for(int k=(7/2)+1;k>i;k--)
            cout<<" ";
          for(int j=1;j<=(2*i)-1;j++)
           cout<<"*";
        }
        else 
        {
            for(int k=5;k<=i;k++)
             cout<<" ";
            int z=(7-i)+1;
            for(int j=1;j<=(2*z)-1;j++)
             cout<<"*";
        }
         cout<<endl;
    }
   return 0; 
}
