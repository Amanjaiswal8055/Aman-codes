#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} snode;

void transverse(snode *start)
{
    while (start != NULL)
    {
        printf("Element is %d\n", start->data);
        start = start->next;
    }
}

int main()
{
    snode *first, *second, *third, *fourth, *fifth, *start;

    first = (snode *)malloc(sizeof(struct node));
    second = (snode *)malloc(sizeof(struct node));
    third = (snode *)malloc(sizeof(struct node));
    fourth = (snode *)malloc(sizeof(struct node));
    fifth = (snode *)malloc(sizeof(struct node));

    first->data = 6;
    first->next = second;

    second->data = 133;
    second->next = third;

    third->data = 154;
    third->next = fourth;

    fourth->data = 15456;
    fourth->next = fifth;

    fifth->data = 158899996;
    fifth->next = NULL;

    start = first;

    transverse(start);
}