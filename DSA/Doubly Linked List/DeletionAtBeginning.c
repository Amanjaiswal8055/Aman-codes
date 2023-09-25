#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head;

void createlist(int n);
void deleteNodeAtBeginning();
void displayList(int n);

int main()
{
    int n;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("\nList before deleting beginning node\n");
    displayList(n);

    deleteNodeAtBeginning();
    n--;

    printf("\nList after deleting beginning node\n");

    displayList(n);

    return 0;
}

void createlist(int n)
{
    struct node *temp, *newnode;
    int data;

    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Enter the data of node 1\n");
        scanf("%d", &data);

        head->prev = NULL;
        head->next = NULL;
        head->data = data;
        temp = head;

        for (int i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Unable to allocate memory\n");
            }
            else
            {
                printf("Enter the data of node %d\n", i);
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

void deleteNodeAtBeginning()
{
    struct node *temp, *next;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        next = temp->next;
        next->prev = NULL;
        head = next;
        free(temp);
        printf("\nBeginning node deleted successfully\n");
    }
}

void displayList(int n)
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