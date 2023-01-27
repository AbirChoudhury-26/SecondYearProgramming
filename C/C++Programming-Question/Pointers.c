#include<stdio.h>
int main()
{

int a[5]={'1','2','3','4','5'},i;
int *p=&a[0];
int n=5;
for(i=0;i<5;i++)
{
scanf("\n%d",(p+i));
printf("\n%d",(p+i));
printf("\n%d",*(p+i));

}
return 0;



}