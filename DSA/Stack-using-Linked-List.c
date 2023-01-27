#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;

node *top, *temp;
void push()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        temp = top;
        printf("%d is deleted\n",temp->data);
        top = top->next;
        free(temp);
        temp = NULL;
        
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("%d\n", top->data);
    }
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
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