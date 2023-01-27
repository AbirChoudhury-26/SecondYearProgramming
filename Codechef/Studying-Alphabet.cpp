#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[26];
    cout<<"Enter the string:";
    cin>>s;
    int n;
    cin>>n;
    char w[12];
    for(int i=0;i<n;i++)
    {
        int f=0;
        cin>>w;
        int length=strlen(w);
        for(int i=0;w[i]!='\0';i++)
         {
             for(int j=0;s[j]!='\0';j++)
             {
                 if(w[i]==s[j])
                 {
                     f++;
                     break;
                 }
             }
         }

         if(length==f)
          cout<<"Yes"<<"\n";
        else
         cout<<"No"<<"\n";

    }
   

}