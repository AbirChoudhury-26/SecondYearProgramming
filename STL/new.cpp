#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 int main()
 {
    string str="abcghdiefjoba";
    // cin>>s;
    vector<int>v;
    int ans=0;
    int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
    for(int i=0;i<26;i++)
    {
        if(alphabet[i]!=0)
          v.push_back(alphabet[i]);
    }
//    cout<<"Frequency of all alphabets in the string is:"<<endl;
//    for (i = 0; i < 26; i++)
//    cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
        
        for(auto it:v)
         cout<<it<<" ";
         cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(i<9)
         ans+=v[i]*1;
        else if(i>=9 && i<18)
         ans+=v[i]*2;
        else
         ans+=v[i]*3;
    }
    cout<<ans<<endl;
 }