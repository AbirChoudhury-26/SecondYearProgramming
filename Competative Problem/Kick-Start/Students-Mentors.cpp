#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, j;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            int a = v[i];
            v[i] = v[i] * 2;
            sort(v.begin(), v.end());
            auto it = find(v.begin(), v.end(), (2 * a));
            int index = it - v.begin();
            for (j = index - 1; j >= 0; j--)
            {
                if (v[j] < (2 * a))
                {
                    cout << v[j] << " ";
                    break;
                }
            }
            if (j == -1)
                cout << "-1"
                     << " ";
            replace(v.begin(), v.end(), (2 * a), a);
            //  for(auto it:v)
            //   cout<<it<<" ";
        }
        cout << endl;
    }
}