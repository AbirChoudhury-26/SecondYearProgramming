#include<stdio.h>
int main()
{
 int n,num,mod,a,sum=0;
printf("Enter the number:");
scanf("%d",&num);
n=num;
while(n>0)
{
    mod=n%10;
     a=mod*mod*mod;
     sum=sum+a;
     n=n/10;
}
if(sum==num)
{
    printf("Armstrong Number");
}
else
{
    printf("Not");
}
return 0;
}