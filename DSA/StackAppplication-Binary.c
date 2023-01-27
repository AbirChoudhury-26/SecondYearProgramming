#include<stdio.h>
int main()
{
int num,mod,stack[50],top=-1,i;
printf("Enter the decimal number:");
scanf("%d",&num);
while(num>0)
{
    mod=num%2;
    stack[++top]=mod;
    num/=2;
}
printf("Binary conversion of number is:\n");
for(i=top;i>=0;i--)
{

    printf("%d",stack[i]);
}
return 0;

}
