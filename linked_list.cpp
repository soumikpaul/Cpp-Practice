#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head,int key)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=key;
    newnode->next=*head;
    *head=newnode;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
void deleteNode(struct Node** head,int key)
{
    struct Node* temp=*head,*prev=NULL;
    if(temp!=NULL&&temp->data==key)
    {
        *head=temp->next;
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
bool detectLoop(struct Node** head)
{
    struct Node* fast=*head,*slow=*head;
    while(slow&&fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            cout<<"loop"<<endl;
            return 1;
        }
    }
    cout<<"3";
    return 0;
}
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 7);
 
    puts("Created Linked List: ");
    head->next->next->next=head;
    if(detectLoop(&head))
        cout<<"loooooooooop"<<endl;
    
    //printList(head);
    cout<<"5";
    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    printList(head);

    return 0;
}

