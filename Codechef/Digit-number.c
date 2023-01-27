#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    if((N/10)<1)
    {
        printf("1\n");
    }
    else if((N/10)>=1 && (N/10)<10)
    {
        printf("2\n");
    }
    
    else if((N/10)>=10 &&(N/10)<100)
    {
     printf("3\n");
    }
    else
    {
        printf("More than 3 digits\n");
    }
 return 0;
}