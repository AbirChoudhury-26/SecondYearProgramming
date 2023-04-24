#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int num;
    if((rear+1)%MAX==front)
     printf("Circular-Queue is overflow\n");
    else
    {
        if(front==-1)
         {
             front++;
             rear++;
         }
         else if(rear==MAX-1 && front!=0)
         {
             rear=0;
         }
         else
          rear++;

          printf("Enter the element:");
          scanf("%d",&num);
          queue[rear]=num;
    }
}

void dequeue()
{
    if(front==-1)
     printf("Circular-Queue is empty\n");
    else if(front==rear)
     {
         front=-1;
         rear=-1;
     }
     else if(front==MAX-1)
      front=0;
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
            printf("%d\n", queue[i]);
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
            enqueue();
            break;
        case 2:
            dequeue();
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