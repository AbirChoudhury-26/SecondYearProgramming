#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dividend, divisor, rem;
        cin >> dividend >> divisor;
        while (divisor!=0)
        {
            rem = dividend % divisor;
            dividend = divisor;
            divisor = rem;
        }
        cout << dividend << endl;
    }
    return 0;
}