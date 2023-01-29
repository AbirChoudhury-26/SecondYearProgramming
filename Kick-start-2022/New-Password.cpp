#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0,up=0,lo=0,sp=0;
        cin>>n;
        string s,st;
        cin>>s;
        //cout<<s.length();
        for(int i=0;s[i]!='\0';i++)
        {
           if(s[i]>='A' && s[i]<='Z' )
            up++;
         else if(s[i]>='a' && s[i]<='z' )
          lo++;
        else if(s[i]>='0' && s[i]<='9')
         d++;
        else 
         sp++;
        }
       cout<<up<<" "<<lo<<" "<<d<<" "<<sp<<endl;
        if(s.length()==7 && up!=0 &&lo!=0 && d!=0 && sp!=0)
                   cout<<s<<endl;
        else if(s.length()<7)
        {
                int diff=7-s.length();
                
                while(diff!=0)
                {
                    cout<<diff<<endl;
                    if(up==0)
                    {
                       st=s+"A";
                       diff--;
                    }
                    else if(lo==0)
                     {
                         st=s+"a";
                         diff--;
                     }
                     else if(d==0)
                      {
                         st= s+"1";
                          diff--;
                      }
                      else 
                      {
                         st= s+"@";
                          diff--;
                      }
                }
    
        }
        cout<<st<<endl;

    }
return 0;
}