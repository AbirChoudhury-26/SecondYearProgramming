#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, count = 0, sum = 0;
    cin >> l >> r;
    for (int z = l; z <= r; z++)
    {
        int f = 1;
        for (int i = 2; i <= sqrt(z); i++)
        {
            if (z % i == 0)
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            count++;
            sum += z;
        }
    }
    cout << count << " " <<sum<< endl;
}