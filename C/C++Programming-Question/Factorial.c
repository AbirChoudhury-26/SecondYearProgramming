#include<stdio.h>
int main()
{
int num,ans=1;
printf("Enter the number:");
scanf("%d",&num);
int n=num;
while(n>0)
{
    ans=ans*n;
    n--;
}
printf("Factorial of %d is %d",num,ans);
return 0;




}