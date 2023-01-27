#include<stdio.h>
int main()
{
int arr[10]= {6,4,8,1,3},n=5,i,j;
for(i=1;i<=n-1;i++)
{
    j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
for(int k=0;k<n;k++)
         printf("%d ",arr[k]);
    printf("\n");
}
printf("----------------------------");
printf("Sorted Array is:");
printf("[");
for(i=0;i<n;i++)
{

    printf(" %d ",arr[i]);
}
printf("]");
return 0;

}