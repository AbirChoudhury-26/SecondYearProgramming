#include<stdio.h>
int i,j;
int show(int x)
{
    x=x+10;
printf("%d\n",x);

return x;

}
int main()
{
    int a=12;
    a=show(a);
    printf("%d",a);
    return 0;
}