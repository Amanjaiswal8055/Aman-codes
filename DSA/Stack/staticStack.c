#include <stdio.h>
#include <stdlib.h>

void push();
int pop();
void display();
bool isEmpty();
bool isFull();

#define size 8

int stack[size];
int top = -1;

int main()
{
    int operation;

    while (1)
    {
        printf(" 1.To push\n 2.To pop\n 3.To display list\n 4.To exit\n");
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            goto exit;
        }
    }
exit:

    return 0;
}

void push()
{
    int data;

    printf("Enter data to push in stack\n");
    scanf("%d", &data);

    if (isFull())
    {
        printf("OVERFLOW\n");
        exit(0);
    }
    else
    {
        stack[++top] = data;
    }
}
int pop()
{
    int data;

    if (!isEmpty())
    {
        data = stack[top];
        top--;
        return data;
    }
    else
    {
        printf("*********STACK IS EMPTY*********\n");
    }
}

void display()
{
    printf("**********DATA IN STACK IS**********\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

bool isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}