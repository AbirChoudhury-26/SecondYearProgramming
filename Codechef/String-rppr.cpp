#include<iostream>
#include<string>
using namespace std;

int main()
{
int count=0;
string s;
cout<<"Enter the string:";
cin>>s;
for(int i=0;s[i]!='\0';i++)
{
    if(s[i]=='p' && s[i+1]=='r')
    {
      count++;
       for(int i=s[i];i<s[i+1];i++)
       {
          scanf("%s",&s[i+2]);
       }
    }
}
return 0;
}