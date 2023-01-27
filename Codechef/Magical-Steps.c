#include <stdio.h>
int main()
{
    int X, Y, count = 0, count1 = 0, i, j, ans;
    scanf("%d%d", &X, &Y);

    for (i = X; i <= Y; i++)
    {

        for (j = 2; j < X + 2; j++)
        {
            if ((X + 2 % j) == 0)
            {
                count++;
                break;
            }
            
            else
            {
                count1++;
                i++;
                break;
            }
        }
        
    }

    for(j=2;j<Y+1;j++)
        {
            if((Y+1%i)!=0)
            {
                count++;
                break;
            }
        }
ans=count+count1;
printf("%d",ans);
return 0;
}