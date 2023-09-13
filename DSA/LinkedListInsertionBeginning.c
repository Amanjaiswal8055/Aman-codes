#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} snode;

void transverse(snode *new)
{
    int i = 1;
    while (new != NULL)
    {
        printf("%d element is %d\n", i, new->data);
        new = new->next;
        i++;
    }
}

int main()
{
    snode *first;
    snode *second;
    snode *third;
    snode *fourth;
    snode *ptr;
    snode *start;

    first = (snode *)malloc(sizeof(struct node));
    second = (snode *)malloc(sizeof(struct node));
    third = (snode *)malloc(sizeof(struct node));
    fourth = (snode *)malloc(sizeof(struct node));
    ptr = (snode *)malloc(sizeof(struct node));

    first->data = 6;
    first->next = second;

    second->data = 133;
    second->next = third;

    third->data = 154;
    third->next = fourth;

    fourth->data = 15456;
    fourth->next = NULL;

    ptr->data = 158899996;
    ptr->next = first;

    start = ptr;

    transverse(start);
}