#include<iostream>
#include<string>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
     string s;
     char c;
      cin>>s;
     c=s[s.length()-1];
       if(c=='A' || c=='E' || c=='I'|| c=='O' || c=='U' || c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
                cout<<"Case #"<<i<<": "<<s<<" is ruled by Alice"<<endl;
        else if(c=='y')
         cout<<"Case #"<<i<<": "<<s<<" is ruled by nobody"<<endl;
       else 
         cout<<"Case #"<<i<<": "<<s<<" is ruled by Bob"<<endl;
     }
       return 0;
 }