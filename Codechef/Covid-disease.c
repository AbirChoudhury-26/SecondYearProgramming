#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, d, c = 1, ans;
        scanf("%d%d", &n, &d);
        if (d == 0)
        {
            ans = 1;
        }
        else if (d <= 10)
        {
            for (int j = 1; j <= d; j++)
            {
                c = c * 2;
                if (c <= n)
                    ans = c;
                else
                {
                    ans = n;
                    break;
                }
            }
        }
        else
        {
            ans = 1024;
            c = 1024;
            if (ans <= n)
            {
                for (int j = 11; j <= d; j++)
                {
                    c = c * 3;
                    if (c <= n)
                        ans = c;
                    else
                    {
                        ans = n;
                        break;
                    }
                }
            }
            else
                ans = n;
        }

        printf("%d\n", ans);
    }
    return 0;
}
