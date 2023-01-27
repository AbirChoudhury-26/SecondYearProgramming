#include <stdio.h>
int main()
{
    int N, count = 0;
    printf("Enter the rupees:");
    scanf("%d", &N);
    while (N > 0)
    {
        if (N >= 100)
        {
            N = N - 100;
            count++;
        }

        else if (N >= 50)
        {
            N = N - 50;
            count++;
        }

        else if (N >= 10)
        {
            N = N - 10;
            count++;
        }

        else if (N >= 5)
        {
            N = N - 5;
            count++;
        }

        else if (N >= 2)
        {
            N = N - 2;
            count++;
        }

        else if (N >= 1)
        {
            N = N - 10;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}