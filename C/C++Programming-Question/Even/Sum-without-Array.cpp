#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 1, n, n1 = -2, sum = 0;
    while (f)
    {
        cin >> n;
        if (n == -1)
            f = 0;
        else
        {
            if (n1 == -2)
                n1=n;
            else
            {
                sum = n + n1;
                n1=n;
                cout << sum << " ";
                sum = 0;
            }
        }
    }
}