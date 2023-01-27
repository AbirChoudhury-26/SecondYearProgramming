#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void peek();
void display();
int stack[50];
int top=-1;

int main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice number:");
        printf("\n 1:Push\n 2:Pop\n 3:Peek\n 4:Display:\n 5:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
        break;
        case 2:
            pop();
        break;
        case 3:
            peek();
        break;
        case 4:
            display();
        break;
        case 5:
            exit(0);
        default:
            printf("\nWrong Choice\n");
        }

    }
    return 0;
}

void push()
{
 int ele;
 if(top==49)
 {
     printf("\nStack is already full\n");
 }
else
 {
    printf("\nEnter the element:");
    scanf("%d",&ele);
    stack[++top]=ele;

 }
}
void pop()
{
   if (top==-1)
   {
       printf("\nStack is already Empty\n");
   }
   else
   {
   printf("\nDeleted element is:%d\n",stack[top--]);
   
   }
}
void peek()
{
 printf("\nTop Element is: %d\n",stack[top]);
}
void display()
{
int i;
if(top==-1)
{
    printf("\nStack is already Empty\n");
}
else
{
    printf("\nStack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
}





