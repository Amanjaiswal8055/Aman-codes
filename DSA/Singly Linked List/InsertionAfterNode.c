#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} snode;

int main()
{
    snode *a1, *a2, *a3, *a4, *a5;
    snode *ptr, *start;

    a1 = (snode *)malloc(sizeof(snode));
    a2 = (snode *)malloc(sizeof(snode));
    a3 = (snode *)malloc(sizeof(snode));
    a4 = (snode *)malloc(sizeof(snode));
    a5 = (snode *)malloc(sizeof(snode));
    start = (snode *)malloc(sizeof(snode));
    ptr = (snode *)malloc(sizeof(snode));

    a1->data = 1;
    a1->next = a2;

    a2->data = 2;
    a2->next = a3;

    a3->data = 3;
    a3->next = a4;

    a4->data = 4;
    a4->next = a5;

    a5->data = 5;
    a5->next = NULL;

    start = a1;

    ptr->data = 55;

    while (start != NULL)
    {
        printf("Element %d\n", start->data);
        if (start->data == 3)
        {
            printf("Element %d\n", ptr->data);
        }
        start = start->next;
    }

    return 0;
}