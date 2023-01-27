#include <stdio.h>
#include<stdlib.h>


void push(char ch,char* stack);
// char pop(char* stack);

void push_float(float ch,float* stack);
float pop_float(float* stack);

float evaluate(char * postfix);
float calculate(float a, float b, char c);

int top=-1;
int main()
{
    char *infix = (char *)malloc((sizeof(char)));
    char c;
    printf("\nplease enter Postfix expression = \n");
    fflush(stdin);
    c = getchar();
    while (c!='\n')
    {
        push(c,infix);
        c = getchar();
    }
    push('\0',infix);
    // for(int i=0;*(infix+i)!='\0';i++)
    // {
    //     printf("%c ",*(infix+i));
    // }
    // exit(0);
    evaluate(infix);
    return 0;
}


void push(char ch,char* stack)
{
    if(top==-1)
    {
        *(stack+top+1)=ch; 
        top=top+1;   
    }
    else
    {
        stack = (char *)realloc(stack,(top+2)*sizeof(char));   
        *(stack+top+1)=ch; 
        top=top+1;
    }

}


void push_float(float ch,float* stack)
{
    if(top==-1)
    {
        *(stack+top+1)=ch; 
        top=top+1;   
    }
    else
    {
        stack = (float *)realloc(stack,(top+2)*sizeof(float));   
        *(stack+top+1)=ch; 
        top=top+1;
    }

}

float pop_float(float *stack)
{
    int temp=top;
    top=top-1;
    return *(stack+temp);
}


float evaluate(char * postfix)
{
    float *stack= (float *)malloc(sizeof(float));
    top=-1;
    int num=0;
    float value,a,b;
    char x;
    // push('(',stack);
    int i;
    for(i=0;*(postfix+i)!='\0';i++)
    {
        x=*(postfix+i);
        if( !(x=='+' || x=='-' || x=='*' || x=='/' || x=='^') )
        {
            if(x!=' ')
            {
                num=(num*10)+(x-'0');
                continue;
            }
            else
            {
                push_float((float)num,stack);
                num=0;
            }
        }
        else
        {
            b=pop_float(stack);
            while (b==0)
            {
               b=pop_float(stack);
            }

            a=pop_float(stack);
            while (a==0)
            {
               a=pop_float(stack);
            }
            
            value=calculate(a,b,x);
            push_float(value,stack);
        }
    }
    printf("\nresult = %.2f",*(stack+top));
}


float calculate(float a, float b, char c)
{
    int ans=1;
    switch (c)
        {
        case '+':
            return a+b;
            break;
            
        case '-':
            return a-b;
            break;
            
        case '*':
            return a*b;
            break;
            
        case '/':
            return a/b;
            break;
            
        case '^':
            for(int k=0;k<b;k++) ans*=a;
            return ans;
            break;
        }

}