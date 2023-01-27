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
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    p=(std*)malloc(n*sizeof(std));

for(i=0;i<n;i++)
{
    printf("\nEnter the roll number and name of the student %d:",i+1);
    scanf("%d",&(p+i)->rnum);
    fflush(stdin);
    gets((p+i)->name);
}
    
for(i=0;i<n;i++)
{
    printf("-------------------------------\n");
    printf(" Details of student %d is\n",i+1);
    printf("Roll Number:%d\n",(p+i)->rnum);
    printf("Name is:%s\n",(p+i)->name);
    
}


}


