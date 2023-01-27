#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, mod, count = 0;
        scanf("%d", &N);
        while (N > 0)
        {
            mod = N % 10;
            if (mod == 4)
            {
                count++;
            }
            N = N / 10;
        }
        printf("%d\n", count);
    }
    return 0;
}