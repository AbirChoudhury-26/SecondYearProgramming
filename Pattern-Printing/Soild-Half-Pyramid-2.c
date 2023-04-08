#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
    printf("*");
    for(k=1;k<=i-1;k++)
    {
        printf("%d",k);
    } 
    for(j=i-2;j>=1;j--)
    {
        printf("%d",j);
    
    }
    if(j==0)
    {
    printf("*");
    }
   printf("\n");
}
for(i=3;i>=1;i--)
{
    printf("*");
    for(k=1;k<=i-1;k++)
    {
        printf("%d",k);
    } 
    for(j=i-2;j>=1;j--)
    {
        printf("%d",j);
    
    }
    if(j==0)
    {
    printf("*");
    }
   printf("\n");
}
return 0;


}