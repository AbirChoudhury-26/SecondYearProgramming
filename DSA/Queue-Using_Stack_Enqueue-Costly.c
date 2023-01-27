#include<stdio.h>
#include<stdlib.h>
int stack1[30], stack2[30];
int top1 = -1, top2 = -1;
int i, y;
int push1();
int pop1();
int push2();
int pop2();
int display();
int enqueu();
void dequeu();

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n 1:Enqueu \n 2:Dequeu \n 3:Display \n 4:Exit \n");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            enqueu();
            break;
        case 2:
            dequeu();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice");
            break;
        }
    }
    return 0;
}

int push1(int ele)
{
    if (top1 == 29)
    {
        printf("\nOverflow-1\n");
    }
    else

        stack1[++top1] = ele;
}

int push2(int ele1)
{
    if (top2 == 29)
    {
        printf("Overflow-2\n");
    }
    else
    {
        stack2[++top2] = ele1;
    }
}

int pop1()
{
    if (top1 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
       return  stack1[top1--];
}

int pop2()
{
    if (top2 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
       return stack2[top2--];
}

int enqueu()
{
    int x;
   int num;
     printf("\nEnter the number:");
     scanf("%d", &num);
     
     if (top1 == -1)
     {
        push1(num);
     }
    else if(top1 > -1)
    {
        x = pop1();
        push2(x);
    }
    push1(num);
    while (top2 > -1)
    {
        x = pop2();
        push1(x);
    }
}

void dequeu()
{
    pop1();
    printf("Deleted number is %d\n", pop1());
 
}

int display()
{

    if (top1 == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("\nQueue is:\n");
        for (i = top1; i >= 0; i--)
        {
            printf("%d\n", stack1[i]);
        }
    }
}
