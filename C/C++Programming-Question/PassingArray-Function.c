#include <stdio.h>
//Global Variable
int i,j,k;
//Passing array in function is an example of "Call by Reference"
 void show(int x[],int n)
{
for(i=0;i<n;i++)
{

    x[i]=x[i]+10;
    printf("%d ",x[i]);
}
printf("\n");

}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
    show(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);////Call By Reference:Changes in Formal Parameter are  seen in actual parameter.
    }
    return 0;

}
