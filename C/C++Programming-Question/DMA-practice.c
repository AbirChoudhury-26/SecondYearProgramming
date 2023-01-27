#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, *ptr;
    printf("Enter the number of elements:");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    printf("Enter %d elements in  array:", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n1; i++)
    {
        printf("\n%d", *(ptr + i));
    }

    printf("\nHow many more element you want:");
    scanf("%d", &n2);
    n2 = n1 + n2;

    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Enter %d elements more:", n2 - n1);
    for (i = n1; i < n2; i++)
    {
        scanf("\n%d", (ptr + i));
    }
    printf("Elements in new array are:");
    for (i = 0; i < n2; i++)
    {
        printf("\n%d", *(ptr + i));
    }

    free(ptr);
    return 0;
}