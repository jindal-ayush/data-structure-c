#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
};
int count(struct node *p)
{
    int count = 0;
    while (p != 0)

    {
        count++;
        p = p->next;
    }
    printf("length is %d", count);
 //return count; //  **********second method to print count*********
}
    int main()
    {
        int A[] = {3, 5, 7, 10, 15};
        create(A, 5);
        //  printf("length is %d", count(first));
        count(first);
    }
