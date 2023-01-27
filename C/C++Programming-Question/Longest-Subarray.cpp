#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0, ans = 0, n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                count++;
                ans = max(ans, count);
            }
            else
            {
                count = 0; //Reinitialization of count to 0 whever an odd number is encountered.
            }
        }
        cout << ans << endl;
    }
    return 0;
}
