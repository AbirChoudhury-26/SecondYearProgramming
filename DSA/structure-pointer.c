#include<stdio.h>
#include<stdlib.h>
 
 typedef struct student
 {
int rnum;
char name[30];
 }std;

 int main()
 {
std *p;
int n,i;
printf("Enter the number of students:");
scanf("%d",&n);

p=(std*)malloc(n*sizeof(std));
 for(i=0;i<n;i++)
{
    printf("Enter the roll number and name of the student:");
    scanf("%d",&(p+i)->rnum);
    fflush(stdin);
    gets((p+i)->name);

}
for(i=0;i<n;i++)
{
    printf("\nDetails of students are:");
    printf("\nRoll number=%d",(p+i)->rnum);
    printf("\nName=%s",(p+i)->name);
}


return 0;

 }
