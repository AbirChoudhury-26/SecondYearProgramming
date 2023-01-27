#include <stdio.h>
int main()
{
    int arr[10] = {13,19,18,4,10}, i, j, n = 5;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
    printf("--------------------------------");
    printf("Selection Sorting :");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]");
    return 0;
}