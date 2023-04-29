#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;

node *start, *last, *temp, *p;

void enqueue()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start==NULL)   
    {       
     start=temp;                       
     last=temp;
     last->next=temp;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }

     
}

void dequeue()
{
    if(start==NULL)
     printf("\nUnderflow");
    else if(start->next==last)
    {
        start=NULL;
        last=NULL;
        free(last);
        free(start);
    }
    else
    {
        printf("%d is deleted\n",last->next->data);  //To get explain
        start=start->next;
        last->next=start->next;
        start->next=NULL;
        free(start);
         
    }
}

void display()
{

    if (last == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        p = last->next;
        do
        {
            printf("%d\n", p->data);
            p = p->next;
        } while (p != last->next);
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
