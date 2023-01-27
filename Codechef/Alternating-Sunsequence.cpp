#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n, ans = 0, ans1 = 0;
    cin >>n;
    int a[n];
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
            ans += a[j];
        else
            ans1 += a[j];
    }
    if (ans >= ans1)
        cout << ans << "\n";
    else
        cout << ans1 << "\n";
    return 0;
}