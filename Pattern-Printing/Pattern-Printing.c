#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the number of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=0;k<i-1;k++)
{
    printf(" ");
}

for(j=1;j<=(n-k);j++)
{
    printf("*");
}
printf("\n");
}
    return 0;

}