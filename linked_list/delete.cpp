#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    };
void push(node** hedref,int d)
{
    struct node* new_node=(struct node*) malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=(*hedref);
    (*hedref)=new_node;
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
    cout<<endl;
}
void deleteNode(node **hedref,int key)
{
    struct node* temp=*hedref,*prev;
    if(temp!=NULL&&temp->data==key)
    {
        *hedref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
        return;
    prev->next=temp->next;
    free(temp);
}
int main()
{
    struct node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,7);
    printList(head);
    deleteNode(&head, 1);
    deleteNode(&head, 2);
    //puts("\nLinked List after Deletion of 1: ");
    printList(head);
    return 0;
}
