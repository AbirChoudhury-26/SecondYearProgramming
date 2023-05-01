#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linklist
{
    int data;
    struct linklist *next;
} node;

node *start, *last, *temp, *pos, *imm;
int num = 0;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d", &temp->data);
    temp->next = NULL;
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
        last = temp;
    }
}

void insert_intermediate()
{
    int n, i;
    pos = start;
    printf("Enter the position:");
    scanf("%d", &n);
    if (num < n)
        printf("\nNot possible");
    else
    {
        create_node();
        if (n == 1)
        {
            temp->next = start;
            start = temp;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                pos = pos->next;
            }
            imm = pos->next;

            temp->next = imm;
            pos->next = temp;
        }
    }
}

void display()
{
    temp = start;

    printf("Entered values are:\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Insert-first\n2:Insert-intermediate\n3:Insert-last\n4:Display\n5:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_first();
            break;
        case 2:
            insert_intermediate();
            break;
        case 3:
            insert_last();
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