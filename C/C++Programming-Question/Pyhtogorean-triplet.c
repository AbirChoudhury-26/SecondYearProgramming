#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter the 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
a=a*a;
b=b*b;
c=c*c;
if(a==b+c || b==a+c || c==a+b)
{
    printf("\nPythogorean Triplet");

}
else
{
    printf("Not a triplet");
}
return 0;

}