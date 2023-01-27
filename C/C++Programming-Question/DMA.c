#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n,i,*ptr,sum=0;
printf("Enter the no.of elements:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("Enter the elements:");
for(i=0;i<n;i++)
{
    scanf("%d",(ptr+i));
    sum=sum+ *(ptr+i);

}
printf("\nSum of array numbers is %d",sum);

return 0;





}