#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[8];
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        int ans = 0;
        if (int((str[7]) - 48) % 2 == 0) //Last digit is even number
        {
            for (int j = 1; j <= 7; j += 2)
            {
                if (j < 4)
                    ans = ans + int(str[j]);
                else
                    ans = ans + (int(str[j]) - 48); //We have taken numbers as character therefore converting them in integer form
            }
        }

        else
        {
            for (int j = 0; j <= 7; j += 2)
            {
                if (j < 3)
                    ans = ans + int(str[j]);
                else
                    ans = ans + (int(str[j]) - 48);
            }
        }

        ans = ans % 50;
        ans = ans * 2;
        cout << ans << endl;
    }

    return 0;
}