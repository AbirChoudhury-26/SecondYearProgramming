#include<stdio.h>
int main()
{
int num,i,exp,result=1;
printf("Enter the base number:");
scanf("%d",&num);
printf("Exponent Number :");
scanf("%d",&exp);

for(i=1;i<=exp;i++)
{
    result=result*num;
    
}
printf("\n%d^%d=%d",num,exp,result);
return 0;
}