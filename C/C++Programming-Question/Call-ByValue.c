#include <stdio.h>
#include <stdlib.h>

int i=20,j,k; //Global Variables
void show(int x)
{
x=x+10;
printf("%d",x);
printf("\n");
}

int main()
{

    int a=12;//Call By value:Changes in Formal Parameter are not seen in actual parameter
    show(a);
    printf("%d\n",a);

    return 0;
}
