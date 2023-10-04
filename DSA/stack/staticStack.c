#include <stdio.h>
#include <stdlib.h>

void push(int top,int n)
{
    if (top != 7)
    {
        top++;
        stack[top] = n;
    }
    else
    {
        printf("Overflow\n");
        exit(0);
    }
}

int isEmpty(int top)
{
    if (top == -1)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Not Empty\n");
    }
}

int isFull(int top)
{
    if (top ==)
    {
        
    }
}
int pop(int top)
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
    int stack[8];
    int top = -1;

    push(top,8);
    push(96);
    push(22);
    push(254);
    push(263);
    push(152);
    push(215);
    push(965);
    push(785);
    push(725);
    push(456);

    isEmpty();

    while (top != -1)
    {
        data = pop();
        printf("Data is %d\n", data);
    }

    isEmpty();

    return 0;
}