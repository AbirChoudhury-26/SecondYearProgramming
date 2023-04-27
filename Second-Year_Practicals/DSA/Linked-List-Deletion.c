#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;

node *start, *temp, *last;
int num = 0;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter new value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    num++;
}

void delete_first()
{
    if (start == NULL)
        printf("\nLinked-List is empty");
    else if (start == last)
    {
        printf("%d is deleted\n", start->data);
        free(start);
        free(last);
        temp = NULL;
        num--;
    }
    else
    {

        node *del;
        del = start;
        printf("%d is deleted\n", start->data);
        start = start->next;
        free(del);
    }
}

void delete_intermediate()
{
    int pos;
    node *p;
    printf("Enter the position:");
    scanf("%d", &pos);
    if (num < pos)
        printf("Not Possible\n");
    else if (num == pos)
        delete_last();
    else
    {
        temp = start;
        for (int i = 1; i < pos; i++)
        {
            p = temp;
            temp = temp->next;
        }
        p->next = temp->next;
        free(temp);
        temp = NULL;
        num--;
    }
}

void delete_last()
{
    if (last == NULL)
        printf("Linked-List is empty\n");
    else if (last == start)
    {
        printf("%d is deleted\n", last->data);
        free(start);
        free(last);
        temp = NULL;
        num--;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("%d is deleted\n", last->data);
        free(last);
        last = temp;
        last->next = NULL;
        num--;
    }
}

void display()
{
    if (start == NULL)
        printf("\nEmpty!\n");
    else
    {
        temp = start;
        printf("\nEntered values are as follows = \n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = (temp->next);
        }
    }
}
int main()
{
    int ch, n;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Create Link-List\n2:Delete-First\n3:Delete-Intermediate\n4:Delete-Last\n5:Display\n6:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the number of values you want to insert:");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                create_node();
                if (start == NULL)
                {
                    start = temp;
                    last = temp;
                }
                else
                {
                    last->next = temp;
                    last = last->next;
                }
            }
            break;
        case 2:
            delete_first();
            break;
        case 3:
            delete_intermediate();
            break;
        case 4:
            delete_last();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        }
    }
    return 0;
}