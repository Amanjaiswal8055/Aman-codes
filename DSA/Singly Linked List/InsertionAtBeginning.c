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

        for (int i = 1; i <= n; i++)
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
                temp->next = newnode;
                temp = temp->next;
            }
        }
        printf("Singly linked list created successfully\n");
    }
}

void insertNodeAtBeginnning(int data)
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
        head = newnode;
        printf("Data inserted successfully\n");
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
    int n, data;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("You entered total number of data in list are as follows\n");

    displaylist();

    printf("Enter data to insert at beginning of list\n");
    scanf("%d", &data);

    insertNodeAtBeginnning(data);

    printf("Data in the lis\nt");
    displaylist();

    return 0;
}