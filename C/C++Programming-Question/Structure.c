#include<stdio.h>
// Structure Declaration
struct student
{
    int rnum;
    char name[100];
};
int main()

{
struct student s={101,"Abir Choudhury"};
printf("\nRoll Number=%d",s.rnum);
printf("\nName=%s",s.name);


return 0;


}