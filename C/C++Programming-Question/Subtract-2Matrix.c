#include<stdio.h>
int main()
{
int a[50],b[50],c[50],i,j;
printf("Enter 5 numbers for array 1:");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
}
printf("\n");
printf("Enter 5 numbers for array 2:");
for(i=0;i<5;i++)
{
    scanf("%d",&b[i]);
}

for(i=0;i<5;i++)
{
    printf("%d",b[i]);
}

for(i=0;i<5;i++)
{
    c[i]=a[i]-b[i];
}
printf("\n");
for(i=0;i<5;i++)
{
    printf("%d ",c[i]);
}
return 0;
}