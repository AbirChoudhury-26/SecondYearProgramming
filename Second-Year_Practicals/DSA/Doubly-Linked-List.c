#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    struct linknode *prev;
    int data;
    struct linknode *next;
} node;

int num = 0;
node *start, *temp, *last;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    num++;
}

void insert_first()
{
    create_node();
    if (start == NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        temp->next = start;
        start->prev = temp;
        start = temp;
    }
}

void insert_last()
{
    create_node();
    if (last == NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        last->next = temp;
        temp->prev = last;
        last = temp;
    }
}

void insert_intermediate()
{
    int pos;
    printf("\nEnter the postion:");
    scanf("%d", &pos);
    if (pos > num)
        printf("\nNot Possible!\n");
    else
    {
        create_node();
        if (start == NULL)
        {
            start = temp;
            last = temp;
        }
        else
        {
            node *p, *q;
            p = start;
            for (int i = 1; i < pos; i++)
            {
                q = p;
                p = p->next;
            }
            q->next = temp;
            temp->next = p;
            p->prev = temp;
            temp->prev = q;
        }
    }
}

void display()
{
    if (start == NULL)
        printf("Linked-list is empty\n");
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void reverse_display()
{
    if(start==NULL)
     printf("Linked-List is empty\n");
    else
    {
        temp=last;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->prev;
        }
    }
}
int main()
{
    int ch, n;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Create Linked-List\n2:Insert-First\n3:Insert-Intermediate\n4:Insert-Last\n5:Display\n6:Reverse-Display\n7:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the number of elements in list:");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                insert_last();
            }
            break;
        case 2:
            insert_first();
            break;
        case 3:
            insert_intermediate();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            display();
            break;
            case 6:
             reverse_display();
             break;
        case 7:
            exit(0);
            break;
        }
    }
    return 0;
}
