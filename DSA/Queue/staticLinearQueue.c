#include <stdio.h>
#include <stdlib.h>

int isEmpty();
int isFull();
void enqueue();
void dequeue();
void display();

#define size 3
int queue[size];
int front = -1;
int rear = -1;

int main()
{
    int n;
    while (1)
    {
        printf("1.To enqueue\n2.To dequeue\n3.To display\n4.To exit\n");
        scanf("%d", &n);

        switch (n)
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

        default:
            break;
        }
    }
    return 0;
}

int isEmpty()
{
    if (rear == front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (rear == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue()
{
    int data;

    printf("Enter data\n");
    scanf("%d", &data);

    if (isFull())
    {
        printf("**********Queue is full----------\n");
    }
    else
    {
        queue[++rear] = data;
    }
}
void dequeue()
{
    if (isEmpty())
    {
        printf("**********Queue is empty----------\n");
        exit(0);
    }
    else
    {
        printf("Data removed from queue is %d\n", queue[++front]);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("**********Queue is empty----------\n");
    }
    else
    {
        int count = front;
        while (count != rear)
        {
            printf("Data is %d\n", queue[++count]);
        }
    }
}