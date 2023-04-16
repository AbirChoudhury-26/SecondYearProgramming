#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int ans=0;
       for(int i=0;s[i]!='\0';i++)
       {
           if(s[i]=='C'&& s[i+1]=='J')
           {
              ans+=x;
            //   num++;
           }
           else if( s[i]=='J' && s[i+1]=='C')
           {
            ans+=y;
            // num++;
           }
          else if(s[i]=='?' && (s[i-1]=='C'&& s[i+1]=='J'))
           ans+=x;
          else if(s[i]=='?'&&(s[i-1]=='J'&& s[i+1]=='C'))
           ans+=y;
           cout<<ans<<endl;
       }   
       cout<<"Case #"<<i<<": "<<ans<<endl;
    }
    return 0;
}