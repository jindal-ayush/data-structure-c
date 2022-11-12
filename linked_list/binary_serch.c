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
    struct node *first, *last, *t;
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
int  search(struct node*p , int key){
     while (p!= 0)
     {
        if(key==p->data)
        {
            printf("%d", p->data);
            return p;
          //  break;
            p = p->next;
        }
    return NULL;
     }
     
}
int main()
{
    int A[] = {1, 45, 2, 4, 7};
    create(A, 5);

   search(first , 15);

};