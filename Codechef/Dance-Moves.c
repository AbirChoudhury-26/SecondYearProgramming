#include <stdio.h>
int main()
{

    int x, y, count = 0, diff, T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter the inputs:");
        scanf("%d%d", &x, &y);

        diff = y - x;
        if ((diff % 2) == 0)
        {
            count = diff/ 2;
            // printf("%d\n",count);
        }
        else
        {
            count = ((diff + 1)/2) + 1;
            // printf("%d\n",count);
        }

        printf("%d\n", count);
    }
    return 0;
}