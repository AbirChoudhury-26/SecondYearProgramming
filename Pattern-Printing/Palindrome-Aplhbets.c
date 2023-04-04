#include<stdio.h>
int  main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%c ",k+65-1);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c ",j+65-1);
        }
        printf("\n");
    }
    return 0;
}


