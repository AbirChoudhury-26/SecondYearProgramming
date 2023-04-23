#include <stdio.h>

int main()
{
    int a[50], n, high, low = 0, ele, i, mid;
    printf("Enter the numbers you want to insert:");
    scanf("%d", &n);
    high = n - 1;
    printf("Enter %d numbers:",n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to be search:");
    scanf("%d", &ele);
    while (low < high)
    {
        mid = high + low / 2;
        if (a[mid] == ele)
        {
            printf("Element found\n");
            break;
        }
        else if (ele > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (low > high)
        printf("Element not found\n ");

    return 0;
}