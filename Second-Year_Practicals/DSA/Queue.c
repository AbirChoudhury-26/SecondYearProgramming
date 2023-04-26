#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int queue[50], f = -1, r = -1;

int main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:");
        printf("\n1:Enqueu\n2:Dequeue\n3:Display\n4:Exit\n");
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

void  enqueue()
{
    int num;
    if(r==49)
     printf("\nQueue is overflow\n");
    else
    {
       if(r==-1)
        {
            f++;
            r++;
        }
        else
        {
            r++;
        }
        printf("Enter the number:");
        scanf("%d",&num);
        queue[r]=num;
    }
}

void dequeue()
{
    if(f==-1)
     printf("\nQueue is underflow\n");
    else if(f>r)
     {
         f=-1;
         r=-1;
          printf("\nQueue is underflow\n");
     }
    else
    {
        printf("Deleted element is:%d\n",queue[f]);
         f++;
    }
    
}

void display()
{
    if(f==-1)
     printf("\nQueue is underflow");
    else
    {
        for(int i=f;i<=r;i++)
         printf("%d\n",queue[i]);
    }
}