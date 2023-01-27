#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k = 0, count1 = 0, count2 = 0, f1 = 0, f2 = 0;
        cin >> n >> m;
        vector<int> r(n), g(n), e(m);
        for (int i = 0; i < n; i++)
            cin >> r[i];
        for (int i = 0; i < n; i++)
            cin >> g[i];
        for (int j = 0; j < m; j++)
            cin >> e[j];

        for (int i = 0; i < r.size(); i++)
        {
            if (r[i] > g[i])
            {
                count1++;
                f1 = 1;
                f2 = 0;
            }
            else
            {
                count2++;
                f1 = 0;
                f2 = 1;
            }
            if (k < e.size())
            {
                if (f1 > f2)
                {
                    r.push_back(e[k]);
                    g.push_back(e[k + 1]);
                }
                else
                {
                    g.push_back(e[k]);
                    r.push_back(e[k + 1]);
                }
                k += 2;
            }
        }
        if (count1 > count2)
            cout << "Radhesh wins" << endl;
        else if (count2 > count1)
            cout << "Geethakoomaree wins" << endl;
        else
            cout << "Tie" << endl;
    }
}