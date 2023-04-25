#include<stdio.h>
#include<string.h>

int main()
{
    int a[50]={1,2,3,4,5,7,6,8,9,0,4,4,9,2,1},max=-99999999,i,n=15;
    int b[50]={0};

    for(int i=0;i<n;i++)
     {
         if(a[i]>max)
          max=a[i];
     }
     int count[max+1];

     for(i=0;i<(max+1);i++)
      count[i]=0;
    for(int i=0;i<n;i++)
     count[a[i]]++;
     for(int i=1;i<max+1;i++)
      count[i]=count[i]+count[i-1];

      for(int i=n-1;i>=0;i--)
       b[--count[a[i]]]=a[i]; // To explain +-
    printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
     printf("%d ",b[i]);
     return 0;
}
