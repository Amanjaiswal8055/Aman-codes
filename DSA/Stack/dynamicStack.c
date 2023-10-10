#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *head = NULL;

void push()
{
    int num;

    struct stack *newnode = malloc(sizeof(struct stack));

    printf("********************Enter number to push\n");
    scanf("%d", &num);

    newnode->data = num;
    newnode->next = head;

    head = newnode;
}

void pop()
{
    int data;
    struct stack *temp;

    if (head == NULL)
    {
        printf("!!!!!Stack is empty----------\n");
        exit(0);
    }
    else
    {
        printf("********************Popped element is %d\n",head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}

void display()
{
    struct stack *temp;
    temp = head;

    if (head == NULL)
    {
        printf("!!!!!Stack is empty----------\n");
        exit(0);
    }
    
    printf("**********Printing data of stack**********\n");
    while (temp != NULL)
    {
        printf("Data is %d\n", temp->data);
        temp = temp->next;
    }
    exit(0);
}
int main()
{
    int operation;

    while (1)
    {
        printf("1.To Push\n2.To Pop\n3.To Display Data\n");
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

        default:
        printf("!!!!!Invalid Operation-----\n");
            break;
        }
    }
    return 0;
}