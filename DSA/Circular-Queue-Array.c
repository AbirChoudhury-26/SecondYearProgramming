#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueu()
{

    if ((rear + 1) % MAX == front)
        printf("\nOverflow");
    else
    {
        if (front == -1)
        {
            front++;
            rear++;
        }
        else if (rear == MAX - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        printf("\nEnter the new element:");
        scanf("%d", &queue[rear]);
    }
}

void dequeu()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        printf("%d is deleted\n",queue[front]);
        front++;
        
    }
}

void display()
{
    if (front == -1)
        printf("\nUnderflow");
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d", queue[i]);
            i = (i + 1) % MAX;
        }
    }
    printf("%d\n",queue[rear]);
}

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:enqueu\n2:dequeu\n3:display\n4:exit\n");
        scanf("%d",&ch);
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
        }
    }
    return 0;
}