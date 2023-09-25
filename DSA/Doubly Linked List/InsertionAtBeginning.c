#include <stdio.h>
#include <stdlib.h>

void createlist(int);
void displaylist();
void insertNodeAtBeginning(int);

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head;

int main()
{
    int n, data;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("Enter data to insert at beginning\n");
    scanf("%d", &data);

    printf("\n\n==========List before inserting node==========\n\n");
    displaylist();

    insertNodeAtBeginning(data);

    printf("\n\n==========List after inserting node==========\n\n");
    displaylist();

    return 0;
}

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
        printf("Enter the data of node 1\n");
        scanf("%d", &data);
        head->prev = NULL;
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
                printf("Enter the date of node %d\n", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                newnode->prev = temp;
                temp->next = newnode;
                temp = temp->next;
            }
        }
        printf("Doubly linked list created successfully\n");
    }
}

void displaylist()
{
    struct node *temp, *end;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;

        printf("Data in the list in forward direction:\n");
        while (temp != NULL)
        {
            printf("%d\t", temp->data);

            if (temp->next == NULL)
            {
                end = temp;
            }
            temp = temp->next;
        }
        printf("\n");

        printf("Data in the list in reverse direction:\n");
        while (end != NULL)
        {
            printf("%d\t", end->data);
            end = end->prev;
        }
    }
    printf("\n");
}

void insertNodeAtBeginning(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        newnode->data = data;
        newnode->next = head;
        newnode->prev = NULL;
        head->prev = newnode;
        head = newnode;
        printf("Data inserted successfully\n");
    }
}