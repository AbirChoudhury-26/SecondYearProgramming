#include<stdio.h>

int main()
{
    int a[50],n,loc;
    printf("Enter the number you want to insert:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter the location you want to delete:");
    scanf("%d",&loc);
    for(int i=loc;i<n;i++)
     a[i-1]=a[i];
    n--;
    for(int i=0;i<n;i++)
     printf("%d\n",a[i]);
    return 0;

}