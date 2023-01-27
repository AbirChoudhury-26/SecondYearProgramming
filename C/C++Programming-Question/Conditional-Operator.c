#include<stdio.h>
int main()
{
int a,b;
printf("Enter any 2 numbers:");
scanf("%d%d",&a,&b);
a>b?printf("A is greater"):printf("B is greater");
return 0;
}