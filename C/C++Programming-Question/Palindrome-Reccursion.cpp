#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindrome( string m, int i)
{
    if(i>=m.size()/2)
     return true;
     if(m[i]!=m[m.size()-i-1]) 
      return false;
    else
     return palindrome(m,i+1);
}
int main()
{
    string s = "manash";
    int ans=palindrome(s,0);
     if(ans==1)
      cout<<"Yes,it is a palindrome"<<endl;
    else 
     cout<<"No,it is not a palindrome"<<endl;
    
}