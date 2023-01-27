#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, x, sum = 0, mod, j = 0;
        cin >> n;
        int num = n;
        while (num > 0)
        {
            mod = num % 10;
            sum += mod;
            num /= 10;
        }
        x = 9 - (sum % 9);
        string s1 = to_string(x);
        num = n;
        mod = 0;
        int c = 9999999;
        while (num > 0)
        {
            mod = n % (10 ^ j);
            num = n / (10 ^ j);
            j++;
            string s2 = to_string(num);
            string s3 = to_string(mod);
            string a = s2 + s1 + s3;
            int ans = stoi(a);
            if (ans < c)
                c = ans;
        }
        cout << "Case #" << i << ": " << c << endl;
    }
    return 0;
}