#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    return 0;
}
