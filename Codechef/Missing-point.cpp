#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m1, m2;
        cin >> n;
        int c = 4 * n - 1;
        int x[c], y[c];
        for (int i = 0; i < c; i++)
        {
            cin >> x[i];
            cin >> y[i];
        }

        for (int i = 0; i < c; i++)
        {
            sort(x, x + c);
            sort(y, y + c);
        }

        for (int i = 0; i < c; i++)
        {
            if (x[i] == x[i + 1])
                i++;
            else
            {
                m1 = x[i];
                break;
            }
        }
        for (int i = 0; i < c; i++)
        {
            if (y[i] == y[i + 1])
                i++;
            else
            {
                m2 = y[i];
                break;
            }
        }

        cout << m1 << " " << m2 << endl;
    }
    return 0;
}