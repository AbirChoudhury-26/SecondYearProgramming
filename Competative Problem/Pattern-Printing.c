#include<stdio.h>
int main()
{
int n,i,j,k,l;
printf("Enter the number:");
scanf("%d",&n);
k=(2*n)-1;
l=(2*n)-1;
for(i=1;i<=(2*n-1);i++)
{

    for(j=1;j<=(2*n-1);j++)
    {
      if(i==1 || i==(2*n-1) || j==1 || j==(2*n-1))
      {
        printf("%d ",n);
      }
      else
      {
          // k--;2
          // l--;
          printf("%d ",n-1);
      }
    }
    printf("\n");
}

return 0;

}