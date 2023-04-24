#include <stdio.h>

int main()
{
    int a[50], n, i, j;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
     for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}