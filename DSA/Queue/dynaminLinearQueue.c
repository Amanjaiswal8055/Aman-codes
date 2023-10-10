#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void enqueue()
{
    int data;

    printf("Enter data\n");
    scanf("%d", &data);

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *newnode = malloc(sizeof(struct node));

        newnode->data = data;
        newnode->next = NULL;

        while (temp != NULL)
        {
            temp = temp->next;
            if (temp->next == NULL)
            {
                temp->next = newnode;
                exit(0);
            }
        }
    }
}

void dequeue()
{
    if (head == NULL)
    {
        printf("**********Stack is empty----------\n");
    }
    else
    {
        struct node *temp;
        temp = head;

        printf("Popped element is %d\n", temp->data);

        head = temp->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;

    temp = head;

    if (head == NULL)
    {
        printf("**********Stack is empty----------\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Data is %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int operation;

    while (1)
    {
        printf("1.To enqueue\n2.To dequeue\n3.To display\n4.To exit\n");
        scanf("%d", &operation);

        switch (operation)
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
            break;

        default:
            printf("!!!!!!!!!!Invalid operation---------------\n");
            break;
        }
    }

    return 0;
}