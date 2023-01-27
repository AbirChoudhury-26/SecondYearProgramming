#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,n;
printf("Enter the number of times:");
scanf("%d",&n);
printf("%d",n1);
printf("\n%d",n2);
for(i=1;i<=n;i++)
{
n3=n1+n2;
printf("\n%d",n3);
n1=n2;
n2=n3;

}
return 0;

}
