#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int f[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int n = a[i];
        while (n > 0)
        {
            int mod = n % 10;
            n /= 10;
            f[mod]++;
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        while (f[i] != 0)
        {
            cout << i;
            f[i]--;
        }
    }
}
