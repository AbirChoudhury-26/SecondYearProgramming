#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        if (w < 50 && h > 170)
            count++;
    }
    cout << count << endl;
}