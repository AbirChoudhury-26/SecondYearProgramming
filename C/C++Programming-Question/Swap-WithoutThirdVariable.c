#include<stdio.h>
 int main()
 {

int a,b;
printf("Enter the 2 numbers:");
scanf("%d%d",&a,&b);
printf("\nBefore Swapping a=%d and b=%d",a,b);
if(a<b)//a=20,b=30
{
    b=b-a;//10
    a=a+b;//20+10=30;
    b=a-b;//30-10=20;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
else
{//a=80,b=20
    a=a-b;//a=60
    b=a+b;//b=60+20=80
    a=b-a;//80-60=20
    printf("\nAfter swapping a=%d and b=%d",a,b);

}

return 0;

 }