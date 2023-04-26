#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
} node;
node *start, *temp, *last;
void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter new value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}
void reverse()
{
    if (start == NULL)
        return;
    else if (start == last)
        return;
    else if (start->next == last)
    {
        last->next = start;
        temp = start;
        start = last;
        last = temp;
        last->next = NULL;
    }
    else
    {
        node *p, *q, *r;
        p = start;
        q = p->next;
        p->next = NULL;
        last = p;
        r = q->next;
        while (r != NULL)
        {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;
        start = q;
    }
}
int main()
{
    int n;
    printf("\nEnter number of values you want to store = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        create_node();
        if (start == NULL)
        {
            start = temp;
            last = temp;
        }
        else
        {
            (last->next) = temp;
            last = (last->next);
        }
    }

    reverse();
    temp = start;
    printf("\nReversed linked list is as follows = \n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = (temp->next);
    }
    return 0;
}