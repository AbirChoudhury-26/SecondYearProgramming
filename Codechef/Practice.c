#include <stdio.h>
int main()
{
    int N, mod, mod1, sum = 0;
    printf("Enter the number:");
    scanf("%d", &N);
    while (N > 0)
    {
        mod = N % 10;
        N = N / 10;
        while (N > 0)
        {
            mod1 = N % 10;
            N = N / 10;
        }
        sum = mod + mod1;
    }
    printf("%d", sum);

    return 0;
}