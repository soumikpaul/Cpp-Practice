#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    struct Node* left, *right;
 };
struct Node* newnode(int key)
{
    struct Node* temp=new Node;
    temp->key=key;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(struct Node* temp)
{
    if (!temp)
        return;
 
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}
void deletedeep(struct Node* root,struct Node* del)
{
    struct Node* temp;
    queue<struct Node*> q;
    //if(root!=NULL)
        q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->right)
        {
            if(temp->right==del)
            {
                
                temp->right=NULL;
                delete(temp->right);
                return;    
            }
            else
                q.push(temp->right);
       }
       if(temp->left)
        {
            if(temp->left==del)
            {
                temp->left=NULL;
                delete(temp->left);
                return;    
            }
            else
                q.push(temp->left);
       }
   }
   
}
void deleten(struct Node* root, int key)
{
    struct Node* key_node;
    struct Node* temp;
    queue<struct Node*> q;
    if(root!=NULL)
        q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->key==key)
            key_node=temp;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    int k=temp->key;
    cout<<k<<"  k   "<<key_node->key<<endl;
    deletedeep(root,temp);
    //key_node->key=k;
}   
void insert(struct Node* root,int key)
{
    queue<struct Node*> q;
    if(root!=NULL)
        q.push(root);
    while(!q.empty())
    {
        struct Node* front=q.front();
        q.pop();
        if(!front->left){
            front->left=newnode(key);
            break;
            }
        else
            q.push(front->left);
        if(!front->right){
            front->right=newnode(key);
            break;
            }
        else
            q.push(front->right);
    }
}
int main()
       
{
    struct Node* root = newnode(10);
    root->left = newnode(11);
    root->left->left = newnode(7);
    root->right = newnode(9);
    root->right->left = newnode(15);
    root->right->right = newnode(8);
 
    cout << "Inorder traversal before insertion:";
    inorder(root);
 
    int key = 12;
    insert(root, key);
 
    cout << endl;
    cout << "Inorder traversal after insertion:";
    inorder(root);
    deleten(root,11);
    inorder(root);
 
    return 0;
}
