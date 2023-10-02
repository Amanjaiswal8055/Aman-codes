#include <stdio.h>
int stack[8];
int top = -1;

void push(int n)
{
    if (top != 7)
    {
        top++;
        stack[top] = n;
    }
    else
    {
        printf("Overflow\n");
    }
}

int pop()
{
    int data;
    if (top < 8 && top > -1)
    {
        data = stack[top];
        top--;
        return data;
    }
    else
    {
        printf("Stack is empty\n");
    }
    
}

int main()
{
    int data;

    push(8);
    push(96);
    push(22);
    

    while (top != -1)
    {
        data = pop();
        printf("Data is %d\n",data);
    }

    return 0;
}