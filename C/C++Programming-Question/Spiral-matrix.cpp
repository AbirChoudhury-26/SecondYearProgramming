#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}, a = 0, b = 0, l = 3, m = 3;
    while (a < 3 && b < 3)
    {
        for (int i = b; i <= m; i++)
            cout << c[b][i] << " ";
        a += 1;

        for (int i = a; i <= m; i++)
            cout << c[i][m] << " ";
        m -= 1;

        for (int i = m; i >= b; i--)
            cout << c[l][i] << " ";
        l -= 1;

        for (int i = l; i > b; i--)
            cout << c[i][b] << " ";
        b+= 1;
    }
}