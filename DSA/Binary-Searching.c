#include <stdio.h>
int main()
{
    int i, arr[10] = {1, 2, 3, 5, 4, 6, 7, 8, 9, 10}, ele = 10, low = 0, high = 9, mid;
    while (low < high)
    {
        mid = high + low / 2;
        if (arr[mid] == ele)
        {
            printf("%d found at position %d", ele, mid + 1);
            break;
        }
        else if (arr[mid] > ele)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low > high)
        printf("Element Not found");
    return 0;
}