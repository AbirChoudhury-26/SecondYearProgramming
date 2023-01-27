#include<stdio.h>
int main()
{

 int num,n,rev=0,mod;
 printf("Enter the number:");
 scanf("%d",&num);
 n=num;
 while(n>0)
 {
     mod=n%10;
     rev=(rev*10)+mod;
     n=n/10;
 }
 if(rev==num)
 {
     printf("Number is Palindrome");
 }
 else
  printf("Number is not a palindrome");


return 0;
}