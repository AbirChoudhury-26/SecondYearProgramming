#include<stdio.h>
void swap(int,int);
int main()
{
int a,b;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
printf("\nBefore swapping a=%d and b=%d",a,b);
swap(a,b);
printf("\n");
printf("\n Again swapping a=%d and b=%d",a,b);
return 0;
}
void swap(int x,int y)
{

int z=x;
x=y;
y=z;
printf("\nAfter swapping a=%d and b=%d",x,y);

}