#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    };
void push(struct Node** hed_ref, int dat)
{
    struct Node * no=(struct Node*)malloc(sizeof(struct Node));
    no->data=dat;
    no->next=*hed_ref;
    *hed_ref=no;
}
struct Node* findinter(struct Node* a, struct Node* b)
{
    struct Node * n=NULL;
    while(a!=NULL&&b!=NULL)
    {
        if(a->data==b->data)
        {
            push(&n,a->data);
            //n=n->next;
            a=a->next;
            b=b->next;
        }
        else if (a->data > b->data)      
            a = a->next;
        else
           b = b->next;
  }
  return n;
}
void print(struct Node *node)
{
  while (node != NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
}
            
int main()
{
    struct Node* a=NULL;
    struct Node* b=NULL;
    struct Node* inter=NULL;
    push(&a,1);
    push(&a,2);
    push(&a,3);
    push(&a,4);
    push(&a,5);
    push(&a,6);
    print(a);
    cout<<endl;
    push(&b,1);
    push(&b,2);
    push(&b,4);
    push(&b,6);
    print(b);
    cout<<endl;
    inter=findinter(a,b);
    print(inter);
    return 0;
}
