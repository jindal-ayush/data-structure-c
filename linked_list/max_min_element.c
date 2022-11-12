#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct node *next;

} *head = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *previous, *t;
    head = createNode(A[0]);
    previous = head;

    for (i = 1; i < n; i++)
    {
        t = createNode(A[i]);
        previous->next = t;
        previous = t;
    }
}

struct Node *createNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node *));
    node->data = data;
    node->next = NULL;
    return node;
}

int maximum(struct Node *p)
{
    int max = INT_MIN;
    while (p != 0)
    {

        if (p->data > max)
            max = p->data;
        p = p->next;
    };
    return max;
};
int minimum(struct Node *p)
{
    int min = INT_MAX;
    while (p != 0)
    {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

int ReverseMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT_MIN;
    x = ReverseMax(p->next);
    if (x > p->data)
        return x;
    else
        return p->data;
};
int main()
{
    int A[5] = {11, 2, 13, 4, 5};
    create(A, 5);
    printf("maximum element is %d\n", ReverseMax(head));

    printf("recusrive maximum element is %d\n", maximum(head));
    printf("minimum element is %d ", minimum(head));
}
