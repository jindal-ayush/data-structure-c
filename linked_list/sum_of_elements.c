#include <stdio.h>
#include<stdlib.h>


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

int add(struct node * p){
    int sum = 0;
    while(p!=NULL){
        sum = sum + p->data;
        p = p->next;
    }
   printf(" the sum is  %d", sum);
   return sum;
}

int recursiveSum(struct node *p){
if(p==NULL)
{
    return 0;
}
else{
    return recursiveSum(p->next)+p->data;

}
}
int main(){
    int A[]  ={1,3,5,7,2};
    create(A, 5);
    add(first);
   // printf(" \nthe sum is %d",add(first));
  printf("\nrecursive sum is  %d", recursiveSum(first));
    return 0;   
}