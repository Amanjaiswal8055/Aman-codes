#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void createlist(int n);
void displaylist();
void DeleteDuplicateNode();

int main()
{
    int n, data;

    printf("Enter the total number of nodes\n");
    scanf("%d", &n);

    createlist(n);

    printf("You entered total number of data in list are as follows\n");
    displaylist();

    DeleteDuplicateNode();

    printf("Data in the list\n");
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

void DeleteDuplicateNode()
{
    struct node *ptr, *preptr, *temp, *p;

    ptr = head;

    while (ptr != NULL)
    {
        preptr = ptr->next;
        while (preptr != NULL)
        {
            if (preptr->data == ptr->data)
            {
                temp = ptr->next;
                while (temp->next != preptr)
                {
                    temp = temp->next;
                    printf("cccc\n");
                }
                temp->next = temp->next->next;
                free(preptr);
                preptr = temp->next;
                printf("dddd\n");
            }
            else
            {
                preptr = preptr->next;
                printf("aaaa\n");
            }
        }
        ptr = ptr->next;
        printf("bbbb\n")
    }
}
