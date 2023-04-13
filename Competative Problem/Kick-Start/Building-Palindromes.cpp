#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, q, count = 0;
        cin >> n >> q;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int j = 0; j < q; j++)
        {
            int l, r, f = 1, odd = 0;
            cin >> l >> r;
            for (int k = l - 1; k <= r - 1; k++)
                mp[s[k]]++;
            int len = (l - r) + 1;
            if (len % 2 == 0)
            {
                for (auto it : mp)
                {
                    if ((it.second) % 2 != 0)
                    {
                        f = 0;
                        break;
                    }
                }
            }
            else
            {
                for (auto it : mp)
                {
                    if ((it.second) % 2 != 0)
                        odd++;
                }
                if (odd != 1)
                    f = 0;
            }
            mp.clear();
            if (f == 1)
                count++;
        }
        cout << "Case #" << i+1 << ": " << count << endl;
    }
    return 0;
}