#include<stdio.h>
int main()
{
int ch;
printf("Enter the marks range of student\n");
printf("1:Above 90\n2:Above 80\n3:Above 60\n4:Above 40\n");
printf("Enter the Number:");
scanf("%d",&ch);
switch(ch)
{
case 1:
 printf("Excellent");
 break;
 case 2:
 printf("Good");
 break;
 case 3:
 printf("Average");
 break;
 case 4:
 printf("Fair");
 break;
 default:
  printf("Failure");
break;
}
return 0;


}






