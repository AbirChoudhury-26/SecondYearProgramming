#include <iostream>
#include <string>

using namespace std;

int main()
{

    int x = 0, y = 0, w = 0, z = 0, ans, ans1;
    char s[100000];
    cin >> s;
    cout << "\n";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '0')
        {
            if (s[i + 1] == '1' )
            {
                x++;
                cout << "x-" << x << "\n";
            }
            else
            {
               while (s[i + 1] != '1' )
               {
                   i++;
               }
                
                w++;
                cout << "w-" << w << "\n";
            }
        }

        else if (s[i] == '1')
        {
            if (s[i + 1] == '0' )
            {
                y++;
                cout << "y-" << y << "\n";
            }
            else
            {
                while (s[i + 1] != '0' )
                {
                    i++;
                }
                
                z++;
                cout << "Z-" << z << "\n";
            }
        }
    
    }


    ans = x * 1 + w * 2;
    ans1 = y * 1 + z * 2;

    cout << ans << "\n";
    cout << ans1 << "\n";
    // if(ans<=ans1)
    // {
    //     cout<<ans<<"\n";

    // }
    // else
    // {
    //     cout<<ans1<<"\n";
    // }
}
