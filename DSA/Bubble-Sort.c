#include <stdio.h>
int main()
{
    int a[10] = {12, 5, 3, 7, 1}, n = 5, i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        for (int k = 0; k < n; k++)
            printf("%d ", a[k]);
        printf("\n");
    }
    printf("---------------------------------------");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}

// 1 step:5 3 7 8 12
// 2 step:3 5 7 8 12
// 3 step:3 5 7 8 12