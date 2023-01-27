#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m, ans = 0;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int max = -99999, min = 99999;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] > max && a[i][j] < min)
                {
                    max = a[i][j];
                    min = a[i][j];
                }
                else if (a[i][j] > max)
                    max = a[i][j];
                else if (a[i][j] < min)
                    min = a[i][j];
            }
            int diff = max - min;
            if (diff > ans)
                ans = diff;
        }
        printf("%d\n", ans);
    }

    return 0;
}