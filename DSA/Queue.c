#include <stdio.h>
#include <stdlib.h>
int f = -1, r = -1;
int queue[30];
void enqueu();
void dequeu();
void display();

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice number:");
        printf("\n 1:Enqueu\n 2:Dequeu\n 3:Display\n 4:exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueu();
            break;
        case 2:
            dequeu();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice");
            break;
        }
    }
        return 0;
}

void enqueu()
{
    int num;
    if (r == 29)
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

void dequeu()
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
