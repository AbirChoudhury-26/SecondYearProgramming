#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int diff = 0, f = 1, m = 0;
        string i, p;
        cin >> i >> p;
        if (p.length() == i.length())
        {
            for (int j = 0; i[j] != '\0'; j++)
            {
                if (p[j] != i[j])
                {
                    f = 0;
                    break;
                }
            }
        }
        else if (p.length() > i.length())
        {
            diff = p.length() - i.length();
            for (int j = 0; i[j] != '\0'; j++)
            {
                if (p[j] != i[j])
                    m++;
            }
            if (diff >= m)
                f = 1;
            else
                f = 0;
        }
        else
            f = 0;
        if (f == 1)
            cout << "Case #" << k << ": " << diff << endl;
        else
            cout << "Case #" << k << ": "
                 << "IMPOSSIBLE" << endl;
    }
    return 0;
}