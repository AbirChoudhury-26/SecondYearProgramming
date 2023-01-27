#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n, w, l,f=1,m=1;
      cin >> n >> l >> w;
      int h[n], r[n];
      for (int i = 0; i < n; i++)
         cin >> h[i] >> r[i];
      while(f)
      {
         int sum = 0;
         for (int i = 0; i < n; i++)
         {
            h[i] += r[i] * 1;
            if (h[i] >= w)
               sum += h[i];
         }
          if(sum>=l)
            f=0;
          else
           m++;
      }
      cout<<m<<endl;
}