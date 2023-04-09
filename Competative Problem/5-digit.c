#include<stdio.h>
int main()
{
int mod,n,sum=0;
scanf("%d",&n);
while(n>0)
{
    mod=n%10;
    sum=sum+mod;
    n=n/10;
}
printf("%d",sum);
return 0;

}