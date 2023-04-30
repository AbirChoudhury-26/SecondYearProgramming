#include<stdio.h>
#include<string.h>

int top=-1;
char stack[50];
void push( char);
void pop();

void push( char x)
{
    if(top==49)
     printf("\nOverflow");
    else 
       stack[++top]=x;
}

void pop()
{
    if(top==-1)
     printf("\nUnderflow");
    else 
     printf("%c",stack[top--]);
}

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
     push(str[i]);
    
    printf("Reversed String is:\n");
     for(int i=top;i>=0;i--)
      pop();
    return 0;
}

