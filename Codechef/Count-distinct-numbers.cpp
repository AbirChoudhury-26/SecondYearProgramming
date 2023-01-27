#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<int> vec;
    int n, k, x, j, num, z,c;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> num;
      vec.push_back(num);
    }
    c = n - k + 1;
    for (int i = 0; i < c; i++)
    {
      j = i;
      z = 1;
     int count=1;
      sort(vec.begin() + i, vec.begin() + k + i);
      while (z != k)
      {
        if (vec[j] != vec[j + 1])
          count++;
        z++;
        j++;
      }
      cout << count << " ";
      z = 0;
      j = 0;
    }
    cout<<endl;
  }
  return 0;
}