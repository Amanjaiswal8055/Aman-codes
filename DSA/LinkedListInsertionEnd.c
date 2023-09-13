#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} snode;

int main()
{
    snode *f1;
    snode *f2;
    snode *f3;
    snode *f4;
    snode *ptr, *start;

    f1 = (snode *)malloc(sizeof(snode));
    f2 = (snode *)malloc(sizeof(snode));
    f3 = (snode *)malloc(sizeof(snode));
    f4 = (snode *)malloc(sizeof(snode));
    ptr = (snode *)malloc(sizeof(snode));
    start = (snode *)malloc(sizeof(snode));

    f1->data = 1;
    f1->next = f2;

    f2->data = 2;
    f2->next = f3;

    f3->data = 3;
    f3->next = f4;

    f4->data = 4;
    f4->next = NULL;

    ptr->data = 55;
    start = f1;

    for (int i = 1;; i++)
    {
        printf("%d element is %d\n", i, start->data);
        start = start->next;
        if (start->next == NULL)
        {
            i++;
            printf("%d element is %d\n", i, start->data);
            start->next = ptr;
            ptr->next = NULL;
            i++;
            printf("%d element is %d\n", i, ptr->data);
            break;
        }
    }

    return 0;
}