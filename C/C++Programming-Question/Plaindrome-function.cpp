#include <iostream>
using namespace std;
int chk_palindrome(int n)
{
    int rev = 0, num, mod, m;
    m = n;
    while (m > 0)
    {
        mod = m % 10;
        rev = (rev * 10) + mod;
        m = m / 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = chk_palindrome(n);
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}