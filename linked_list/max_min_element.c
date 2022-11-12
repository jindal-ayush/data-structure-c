#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
    
}*first = NULL;

void create(int A[], int n)
{
       int i;
   struct node * last, *t ;
   first = (struct node *)malloc(sizeof(struct node));
   first->data = A[0];
   first->next = NULL;
   last = first;   

   for(i= 1; i<n; i++){
    t = (struct node*)malloc(sizeof(struct node));
    t->data =A[i];
    t->next = NULL;
    last->next = t;
    last = t;
   }
}
int max(struct node * p){
   int max = INT_MIN;
   while (p !=0)
   {
  
      if(p->data>max)
      max = p->data;
      p = p->next;
   };
   return max;
};
int min(struct node *p){
   int min = INT_MAX;
   while(p!=0)
   {
    if(p->data<min)
       min  = p->data;
         p = p->next;
   }  
   return min;
}

int ReverseMax(struct node *p)
{
    int x = 0;
    if(p==0)
    return INT_MIN;
    x= ReverseMax(p->next);
    if(x>p->data)
        return x;
    else return p->data;
};
int main(){
    int A[5] = {11,2,13,4,5};
    create(A, 5);
    printf("maximum element is %d\n",ReverseMax(first));
   
    printf("recusrive maximum element is %d\n",max(first));
    printf("minimum element is %d ",min(first));
}

    