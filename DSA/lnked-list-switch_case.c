#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
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
    printf("\n%d\n",num);
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
    if (start == NULL)
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

void intermediate()
{
    int n, i;
    create_node();
    pos = start;
    // imm = start;

    printf("Enter the position:");
    scanf("%d", &n);
    if (num < n)
        printf("\nNot possible!!\n");
    else
    {
        if (n == 1)
        {
            temp->next = start;
            start = temp;
        }
        else
        {
            for (i = 0; i < n - 2; i++)
            {
                pos = pos->next;
            }
            imm = pos->next;

            temp->next = imm;
            pos->next = temp;
        }
    }
}

void deletion()
{
    int n, i;
    pos = start;
    if (start == NULL)
    {
        printf("Linked list not available");
    }
    else
    {
        printf("Enter the deleted position:");
        scanf("%d", &n);
        if(num<n)
        {
            printf("No such node exist");
        }
        else if (n == 1)
        {
            temp=start;
            start= start->next;
            free(temp);
            temp=NULL;
            last=NULL;
            num--;
            // printf("%d\n", pos->data);
        }
        else
        {
            for (i = 0; i < n - 2; i++)
            {
                pos = pos->next;
            }
            temp = pos->next;
            pos->next = temp->next;
            temp->next = NULL;
            num--;
            last=pos;
            free(temp);
            printf("%d\n",pos->next);

        }
    }
}

void search()
{
    int n, i;
    pos = start;
    printf("Enter the particular node data you want to search:");
    scanf("%d", &n);

    if (start == NULL)
    {
        printf("No elements present in list");
    }
    else if(n>num)
    {
        printf("No such position exist\n");
    }

    else
    {
        for (i = 1; i <= n - 1; i++)
        {
            pos = pos->next;
        }
        printf("\nNumber is %d\n", pos->data);
        printf("\n%d\n",num);
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

    int n, i, ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Normal Calling Linked List\n2:Insert at First\n3:Insert at last\n4:Intermediate\n5:Display\n6:Deletion of list\n7:Search a particular link node\n8:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the number of elements to be inserted:");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
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
                    last = temp;
                }
            }
            break;

        case 2:
            insert_first();
            break;

        case 3:
            insert_last();
            break;
        case 4:
            intermediate();
            break;

        case 5:
            display();
            break;
        case 6:
            deletion();
            break;
        case 7:
            search();
            break;
        case 8:
            exit(0);
            break;
        }
    }

    return 0;
}
