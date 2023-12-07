#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void createlist(int n)
{
    struct node *newnode, *temp;
    int data;

    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Unable to allocate memory.\n");
    }
    else
    {
        printf("Enter the data of head node\n");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;

        for (int i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));

            if (newnode == NULL)
            {
                printf("Unable to allocate memory.\n");
                break;
            }
            else
            {
                printf("Enter the data of node %d\n", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }
        }
        printf("Singly linked list created successfully\n");
    }
}

void swapping(int index)
{
    int number1, number2, total = 0;
    struct node *temp;

    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        total++;
    }
    printf("Total nodes = %d\n", total - 1);

    temp = head;
    for (int i = 0; i < total; i++)
    {
        if (i == index - 1)
        {
            number1 = temp->data;
        }
        if (i == total - index)
        {
            number2 = temp->data;
            temp->data = number1;
        }
        temp = temp->next;
    }

    temp = head;
    for (int i = 0; i < total; i++)
    {
        if (i == index - 1)
        {
            temp->data = number2;
        }
        temp = temp->next;
    }
}

void displaylist()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int n, index, data;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("You entered total number of data in list are as follows\n");

    displaylist();

    printf("Enter index want to swap\n");
    scanf("%d", &index);

    swapping(index);

    printf("Data in the list\n");
    displaylist();

    return 0;
}