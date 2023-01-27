#include<stdio.h>
int main()
{
int a[50],n,loc;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the %d elements in array",n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter the location of the element to be deleted:");
scanf("%d",&loc);
for(int i=loc;i<n;i++)
{
    a[i-1]=a[i];
}
n--;
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}