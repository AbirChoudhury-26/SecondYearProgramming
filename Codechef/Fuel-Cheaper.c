#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int X, Y, A, B, K;
        scanf("%d%d%d%d%d", &X, &Y, &A, &B, &K);

        X = X + K * (A);
        Y = Y + K * (B);

        if (X > Y)
        {
            printf("DIESEL\n");
        }
        else if (Y > X)
        {
            printf("PETROL\n");
        }
        else
        {
            printf("SAME PRICE\n");
        }
    }

    return 0;
}