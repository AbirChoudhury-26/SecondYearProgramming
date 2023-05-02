#include<stdio.h>

int main()
{
    int a[50],n,loc,ele;
    printf("Enter the number you want to insert:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a new element:");
    scanf("%d",&ele);
    printf("Enter the location:");
    scanf("%d",&loc);
    for(int i=n;i>=loc;i--)
    {
        a[i]=a[i-1];
    }
    a[loc-1]=ele;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;


}