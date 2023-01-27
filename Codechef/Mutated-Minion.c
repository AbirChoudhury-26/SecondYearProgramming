#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k, count = 0, j;
        scanf("%d%d", &n, &k);
        int a[n], b[n];
        for (j = 0; j < n; j++)
            
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j] + k;
        }

        for (j = 0; j < n; j++)
        {
            if (b[j] % 7 == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
