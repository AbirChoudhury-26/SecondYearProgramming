#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("%d\n",a);
printf("%d\n",b);
printf("\nNew values are:");
a=++a;
b=b++;
printf("%d\n",a);
printf("%d",b);
return 0;

}