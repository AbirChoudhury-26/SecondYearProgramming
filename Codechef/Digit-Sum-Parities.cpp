#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0, f = 1, ans;
        cin >> n;
        while (f == 1)
        {
            int num = n;
            int sum=0;
            while (num > 0)
            {
                int mod = num % 10;
                sum += mod;
                num /= 10;
            }
            if (sum % 2 == 0)
                even++;
            else
                odd++;
            if (even > 0 && odd > 0)
            {
                ans = n;
                f = 0;
            }
            else
                n++;
        }
        cout << ans << endl;
    }
    return 0;
}
