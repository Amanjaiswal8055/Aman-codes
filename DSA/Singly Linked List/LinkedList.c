#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void displaylist();
void createlist(int n);
void insertNodeAtBeginnning();
void insertNodeAtEnd();
void DeleteNodeAtBeginnning();

int main()
{
    int n, data, choice;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("You entered total number of data in list are as follows\n");
    displaylist();

    while (1)
    {
        printf("Press\n1.For insertion at beginning.\n2.For insertion at end.\n3.For deletion at beginning.\n4.For deletion at end\n5.To exit.\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertNodeAtBeginnning();
            break;

        case 2:
            insertNodeAtEnd();
            break;

        case 3:
            DeleteNodeAtBeginnning();
            break;

        case 5:
            displaylist();
            exit(0);

        default:
            break;
        }
    }

    printf("After operation the list is : \n");
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

void insertNodeAtBeginnning()
{
    struct node *newnode;
    int data;

    printf("Enter data you want to insert at beginning\n");
    scanf("%d", &data);

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("Data inserted successfully\n");
    }
}

void insertNodeAtEnd()
{
    struct node *newnode, *temp;
    int data;

    printf("Enter data you want to insert at end\n");
    scanf("%d", &data);

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("Data inserted successfully\n");
    }
}

void DeleteNodeAtBeginnning()
{
    struct node *temp, *new;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head->next;
        free(head);
        head = temp;

        printf("Data deleted successfully\n");
    }
}