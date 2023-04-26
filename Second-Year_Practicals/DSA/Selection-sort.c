#include <stdio.h>

int main()
{
    int a[50], n, i, j;
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Sorted elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}