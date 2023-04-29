#include<stdio.h>

int main()
{
    int a[50],n,f=0,ele;
    printf("Enter the number of elements you want to insert:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter the number you want to search:");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(ele==a[i])
        {
         printf("%d is found at %d position",ele,i+1);
         f=1;
         break;
        }       
    }
    if(f==0)
     printf("Element not found\n");
     return 0;
}