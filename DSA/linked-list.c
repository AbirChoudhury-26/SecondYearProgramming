#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;

node *start, *last, *temp, *p;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the number:");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

int main()
{

    int n, i;
    printf("Enter the number of times:");
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
    temp = start;

    printf("Entered values are:\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
