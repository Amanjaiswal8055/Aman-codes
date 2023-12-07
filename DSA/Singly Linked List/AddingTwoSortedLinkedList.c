#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *head2;

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

void createlist2(int n)
{
    struct node *newnode, *temp;
    int data;

    head2 = (struct node *)malloc(sizeof(struct node));
    if (head2 == NULL)
    {
        printf("Unable to allocate memory.\n");
    }
    else
    {
        printf("Enter the data of head2 node\n");
        scanf("%d", &data);
        head2->data = data;
        head2->next = NULL;
        temp = head2;

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
void displaylist(struct node *ptr)
{
    struct node *temp;

    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = ptr;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

void addinglist()
{
    struct node *temp, *temp2;

    temp = head;
    temp2 = head2;

    while (temp2 != NULL)
    {
        if (temp->next == NULL)
        {
            temp->next = temp2;

            while (temp2 != NULL)
            {
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
}

void sort()
{
    struct node *p, *q, *ptr;
    int temp, i = 0;

    p = head;
    q = head;

    printf("ccccc\n");

    while (p != NULL)
    {
        while (q != NULL)
        {

            if (p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            for (; i < 1; i++)
            {
                head = p;
            }
            q = q->next;
        }
        p = p->next;
        q = p;
        i++;
    }
}

int main()
{
    int n, index, data;

    printf("Enter the total number of nodes in first list\n");
    scanf("%d", &n);

    createlist(n);

    printf("Enter the total number of nodes in second list\n");
    scanf("%d", &n);

    createlist2(n);

    printf("You entered total number of data in list are as follows\n");

    displaylist(head);

    printf("Data in the list\n");
    displaylist(head2);

    addinglist();

    printf("Listt after adding two list\n");
    displaylist(head);

    sort();

    printf("Listt after sorting\n");
    displaylist(head);

    return 0;
}