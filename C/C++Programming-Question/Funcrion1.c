#include<stdio.h>
int i;
int push(int a)
{
    
a=a+10;
a=a*10;
a=a-10;
a=a/10;
printf("%d",a);
printf("\n");


}
int main()
{
int x;

for(i=0;i<10;i++)
{
    push(i);
}
return 0;

}
