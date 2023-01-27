#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int X, Y, ans;
        scanf("%d%d", &X, &Y);

        ans = X*1 + Y*2;
        if ((ans % 2) == 0)
        {
            if ((X % 2) == 0 && (Y % 2) == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}