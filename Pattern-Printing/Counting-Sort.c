#include<stdio.h>
int main()
{

int a[50]={1,3,4,5,6,1,3,1,4,2,8,9,6,5,7,2},n=16,i;

int count[10]={0},b[50]={0};
for(i=0;i<n;i++)
{
    count[a[i]]++;
}
for(i=0;i<10;i++)
{
    printf("%d\n",count[i]);
}
for(i=0;i<10;i++)
{
    count[i]+=count[i-1];
}
for(i=0;i<10;i++)
{
    printf("%d\n",count[i]);
}

for(i=n-1;i>=0;i--)
{
    b[--count[a[i]]]=a[i];
}
printf("[");
for(i=0;i<16;i++)
{
    printf("%d ",b[i]);
}
printf("]");

return 0;
}