#include<stdio.h>
int  main()
    {

int i,j;
for(i=3;i<=6;i++)
{
for(j=1;j<=i-2;j++)
{
    printf("%d",i);
}
printf("\n");
}
for(i=5;i>=3;i--)
{
for(j=1;j<=i-2;j++)
{
    printf("%d",i);
}
printf("\n");
}
return 0;




}