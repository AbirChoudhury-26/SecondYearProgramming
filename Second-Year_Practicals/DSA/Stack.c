#include <stdio.h>
#include <stdlib.h>

int stack[50], top = -1;
void push();
void peek();
void pop();
void display();

void push()
{
    int ele;
    if (top > 49)
        printf("\nOverflow");
    else
    {
        printf("Enter the number:");
        scanf("%d", &ele);
        stack[++top] = ele;
    }
}

void pop()
{
    if (top == -1)
        printf("\nUnderflow\n");
    else
        printf("%d is deleted\n", stack[top--]);
}

void peek()
{
    if (top == -1)
        printf("\nUnderflow\n");
    else
        printf("%d\n", stack[top]);
}

void display()
{
    if (top == -1)
        printf("\nUnderflow\n");
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Push\n2:Pop\n3:Peek\n4:Display\n5:Exit\n");
        scanf("%d", &ch);
        switch (ch)
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
            break;
        }
    }
    return 0;
}