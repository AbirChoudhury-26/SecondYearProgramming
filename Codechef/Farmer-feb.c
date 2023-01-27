#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int prime(int);

int main()
{
    int a, b, sum, i;
    printf("Enter the 2 numbers:");
    scanf("%d%d", &a, &b);
    sum = a + b;

    for (int i = 1;; i++)
    {
        if (prime(sum + i))
            break;
    }
    printf("%d", i);
    return 0;
}

int prime(int n)
{
    int i;
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                printf("Non-Prime-%d\n", n);
        }

        if (n == i)
            printf("Prime-%d\n", n);
            
    }
    return true;
}