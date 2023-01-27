#include<stdio.h>
int main()
{

int r;
float a,ans;
printf("Enter the required balance and amount having in bank:");
scanf("%d%f",&r,&a);

if(r>=a)
{
    printf("%.2f",a);
}
else
{
    if(r%5==0)
    {
        ans=a-(r+0.50);
        printf("%.2f",ans);
    }
    else
    {
        printf("%.2f",a);
    }
}

return 0;


}