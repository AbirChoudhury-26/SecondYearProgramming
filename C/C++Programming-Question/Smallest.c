#include <stdio.h>
int main()
{
    int ss = 9999999, s = 99999999, sum = 0;
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        int a[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < N; i++)
        {
            if (a[i] < ss)
            {
                s = ss;
                ss = a[i];
            }
            else if (a[i] < s && a[i] > ss)
            {
                s = a[i];
            }

            
        }
        sum = ss + s;
            printf("%d\n", sum);
        
    }
return 0;
}