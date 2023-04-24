#include<stdio.h>

int main()
{
    int a[50],i,j,n;
    printf("Enter the number of elements you want to insert:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(int i=1;i<=n-1;i++)
     {
         j=i;
          while(j>0 && a[j-1]>a[j])
          {
              int temp=a[j];
              a[j]=a[j-1];
              a[j-1]=temp;
              j--;
          }
          
     }
     printf("Sorted elements are:\n");
      for(i=0;i<n;i++)
       printf("%d\n",a[i]);
return 0;
     
}