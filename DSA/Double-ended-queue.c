#include <stdio.h>
#include <stdlib.h>
#include <process.h>
int queue[50];
void fenqueu();
void renqueu();
void fdequeu();
void rdequeu();
void enqueu();
void dequeue();
void display();
int f = -1, r = -1;
int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Fenqueu\n2:Renqueu\n3:Fdequeu\n4:Rdequeu\n5:display\n6:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            fenqueu();
            break;
        case 2:
            renqueu();
            break;
        case 3:
            fdequeu();
            break;
        case 4:
            rdequeu();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Wrong Choice");
        }
    }
    return 0;
}

void enqueu()
{
    int num;
    if (r == 49)
        printf("Queue is Overflow\n");
    else
    {
        if (f == -1)
        {
            f++;
            r++;
        }
        else
            r++;
        printf("Enter the number:");
        scanf("%d", &num);
        
        queue[r] = num;
    }
}

void dequeue()
{

    if (f == -1)
        printf("\nQueue is Underflow\n");
    else
    {
        printf("Deleted element is:%d\n", queue[f]);
        f++;
    }

    if (f > r)
    {
        f = -1;
        r = -1;
    }
}

void renqueu()
{
    enqueu();
}

void fdequeu()
{
    dequeue();
}

void fenqueu()
{

    if (f == 0)
    {
        printf("\nFront is Full\n");
    }
    else
    {
        if (f == -1)
        {
            f++;
            r++;
        }
        else
        {
            f--;
        }
        printf("Enter the number:");
        scanf("%d", &queue[f]);
    }
}

void rdequeu()
{
    if (r == -1)
    {
        printf("\nUnderfow");
    }
    else
    {
        r--;
    }
    if (r < f)
    {
        f = -1;
        r = -1;
    }
}

void display()
{
    if (f == -1)
        printf("\nUnderflow\n");

    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
