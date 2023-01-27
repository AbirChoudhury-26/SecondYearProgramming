#include <stdio.h>
#include <string.h>
int main()
{
    int i, sum = 0;
    int arr[30];
    printf("Enter the number:");
    for (i = 0;arr[i]!='\0'; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Answer is:");
    for (i = 0; arr[i]!='\0' ;i++)
    {
        printf("%d", arr[i]);
    }
    // if (arr[0] && arr[4])
    // {
    //     sum = arr[0] + arr[4];
    // }
    // printf("%d", sum);
    return 0;
}
