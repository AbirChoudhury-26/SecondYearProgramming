#include<stdio.h>
int ans=1;
void factorial(int);
int main()
{
int num,val=1;
printf("Enter the number:");
 scanf("%d",&num);
factorial(num);
//printf("Facorial of %d is %d",num,val);
return 0;
}
void factorial(int a)
{
   
   do{
       ans=ans*a;
       a--;
   }while(a>0);
   printf("Factorial of number is:%d",ans);
}