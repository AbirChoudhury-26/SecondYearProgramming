#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first and last value:");
scanf("%d%d",&a,&b);
for(int i=a;i<=b;i++)
{
    if(i==1)
    {
        printf("\nOne");
    }
    if(i==2)
    {
        printf("\nTwo");
    }
    if(i==3)
    {
        printf("\nThree");
    }
    if(i==4)
    {
        printf("\nFour");
    }
    if(i==5)
    {
        printf("\nFive");
    }
    if(i==6)
    {
        printf("\nSix");
    }
    if(i==7)
    {
        printf("\nSeven");
    }
    if(i==8)
    {
        printf("\nEight");
    }
    if(i==9)
    {
        printf("\nNine");
    }
    else if(i>9)
    {
        if((i%2)==0)
        {
            printf("\nEven");
        }
        else
        {
            printf("\nOdd");
        }
    }



}

return 0;
}

