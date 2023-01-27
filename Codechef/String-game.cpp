#include <iostream>
#include <string>
#include <string>

using namespace std;

int main()
{
    int n, count = 0, count0 = 0, count1 = 0;
    cin >> n;
    char s[n];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }
    if (count0 == 0 || count1 == 0)
    {
        exit(0);
    }

    else
    {
        while (count0 != 0 || count1 != 0)
        {
            for (int i = 0; s[i] != '\0'; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1' || s[i] == '0' && s[i + 1] == '0')
                {
                    continue;
               
                }
                

                else if (s[i] == '0')
                {
                    if (s[i + 1] == '1')
                    {
                        if (s[i - 1] == '1' || s[i + 2] == '1')
                        {
                            for (i = i; s[i] != '\0'; i++)
                            {
                                s[i] = s[i + 1];
                            }
                            n--;
                            count++;
                            printf("%d\n", count);
                        }

                        else
                        {
                            for (i = i + 1; s[i] != '\0'; i++)
                            {
                                s[i] = s[i + 1];
                            }
                            n--;
                            count++;
                            printf("%d\n", count);
                        }
                    }
                }

                else if (s[i] == '1')
                {
                    if (s[i + 1] == '0')
                    {
                        if (s[i - 1] == '0' || s[i + 2] == '0')
                        {
                            for (i = i; s[i] != '\0'; i++)
                            {
                                s[i] = s[i + 1];
                            }
                            n--;
                            count++;
                            printf("%d\n", count);
                        }

                        else
                        {
                            for (i = i + 1; s[i] != '\0'; i++)
                            {
                                s[i] = s[i + 1];
                            }
                            n--;
                            count++;
                            printf("%d\n", count);
                        }
                    }
                }
                printf("%d\n", count);
            }
        }
    }

    //printf("%d\n", count);
    if (count % 2 == 0)
    {
        cout << "Bob"
             << "\n";
    }
    else
    {
        cout << "Alice"
             << "\n";
    }
    return 0;
}