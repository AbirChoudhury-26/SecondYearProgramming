#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, x, y, sum = 0;
    cin >> n >> x >> y;
    vector<int> vec1(n), vec2(n);
    for (int i = 0; i < n; i++)
        cin >> vec1[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];

     if(x<y)
      {
        sort(vec1.r)
      }
    // for (int i = 0; i < n; i++)
    // {
    //     if (x < y)
    // {
    //     if(vec1[i]>=vec2[i])
    //     {
    //      sum+=vec1[i];
    //      x--;
    //     }
    //     else
    //     {
    //      sum+vec2[i];
    //      y--;
    //     }
    //}
}
// cout << sum << endl;

// return 0;
