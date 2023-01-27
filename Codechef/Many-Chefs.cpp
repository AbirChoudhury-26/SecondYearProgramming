#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--)
         {
            if((i-3>=0) && ((s[i]=='?' || s[i]=='F') && (s[i-1]=='?' || s[i-1]=='E') && (s[i-2]=='?' || s[i-2]=='H') && (s[i-3]=='?' || s[i-3]=='C')))
             {
                s[i-3]='C';
                s[i-2]='H';
                s[i-1]='E';
                s[i]='F';
                 i-=3;
             }
             else if(s[i]=='?')
              s[i]='A';
         }
         for(int i=0;i<s.length();i++)
          cout<<s[i];
        cout<<endl;
    }
}