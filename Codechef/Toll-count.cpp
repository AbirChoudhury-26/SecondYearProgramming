#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    vector<float>v1;
    vector<float>v2;
    while (n--)
    {
        float b;
        string s;
        cin >> s;
        string s1;
        cin >> s1;
        int t;
        cin >> t;
         b=(float)t/60;
         if(s=="entry")
            v1.push_back(b);
         else 
          v2.push_back(b);
    }
     int c;
      for(int i=0;i<v1.size();i++)
      {
          float num=v2[i]-v1[i];
          int c= ceil(num);
           sum+=(c-1)*30+60;
      }
    cout<<sum<<endl;
return 0;   
      
}