#include<iostream>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        string s;
        cin>>s;
        int f=1;
        int n=s.length();
        for (int i = 1; i < n; i++)
        {
        if (s[i] != s[0])
            {
                f=0;
                break;
            }
        }
        cout<<"Case #"<<j<<": ";
        if(f==1)
         cout<<s;
        else if(f==0)
        {
            for(int i=0;i<n;i++)
            {
                // int j=i+1;
                // if(isspace(s[j]))
                //  {
                //      j++;
                //       if(s[i]<=s[j])
                //           cout<<s[i]<<s[i];
                //       else 
                //         cout<<s[i];
                //     i++;
                //  }
                 if(s[i]<=s[i+1])
                  cout<<s[i]<<s[i];
                else
                 cout<<s[i];
                 
            }
        }
        cout<<endl;
      
    }
}