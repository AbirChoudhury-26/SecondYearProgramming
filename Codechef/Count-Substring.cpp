#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            for(int j=1;j<=len-i;j++)
            {
              string a=s.substr(i,j);
              int len=a.length();
               for(int j=0;j<len;j++)
               {
                  if(a[0]=='1' && a[0]==a[len-1])
                  {
                  count++;
                  break;
                  }
               }
               
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
