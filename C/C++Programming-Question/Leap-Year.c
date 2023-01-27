#include<stdio.h>
int main()
{
    int ch;
    void year();
    void century();
    printf("Enter:\n 1:year\n 2:century\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        year();
    break;
       case 2:
        century();
    break;
    }
    return 0;
}
void year(int a)
{
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a leap year");
    }
}
void century(int c)
{
   printf("Enter the century: ");
    scanf("%d",&c);
    if(c%400==0)
    {
        printf("Leap Century");
    }
    else
    {
        printf("Not a leap Century");
    }
} 
