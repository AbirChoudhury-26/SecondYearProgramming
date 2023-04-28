#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;

node *front, *rear, *temp;

void enqueue()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if (front == NULL)
        printf("\nQueue is empty");
    else if (front > rear)
    {
        front = NULL;
        rear = NULL;
        printf("Queue is empty\n");
    }

    else
    {
        temp = front;
        printf("%d is deleted from queue\n", temp->data);
        front = front->next;
        free(temp);
        temp->next = NULL;
    }
}

void display()
{
    if (front == NULL)
    {
        printf(" Queue is Empty\n");
    }
    else
    {
        temp = front;
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
        printf("\n1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
        scanf("%d", &ch);
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