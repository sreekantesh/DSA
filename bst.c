
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node *root;

void insert(int val)
{
    struct node *p,*q;
    struct node *t=root;
    struct node *r;
    if(root == NULL)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->data=val;
        p->left=NULL;
        p->right=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(val< t->data){
            t=t->left;
        }
        else if(val > t->data){
            t=t->right;
        }
        else{
            return;
        }
    }
    
    q=(struct node *)malloc(sizeof(struct node));
    q->left=NULL;
    q->right=NULL;
    q->data=val;
    if(val< r->data)
    {
        r->left=q;
    }
    else
    {
       r->right=q;
    }
       
}
struct node* search(int key)
{
    struct node *temp=root;
    
    while(temp != NULL)
    {
        if(key == temp->data){
            return temp;
        }
        else if(key < temp->data){
            temp=temp->left;
        }
        else{
             temp=temp->right;
        }
    }
    
    return NULL;
}
void Inorder(struct node* p) {
    if (p){
        Inorder(p->left);
        printf("%d\n",p->data);
        Inorder(p->right);
    }
}
void Preorder(struct node* p) {
    if (p){
        printf("%d\n",p->data);
        Preorder(p->left);
        Preorder(p->right);
    }
}
void Postorder(struct node* p) {
    if (p){
        Preorder(p->left);
        Preorder(p->right);
        printf("%d\n",p->data);
    }
}

int main()
{
    insert(10);
    insert(5);
    insert(20);
    insert(8);
   Postorder(root);
    struct node *ptr=search(100);
    
    if(ptr !=NULL)
        printf("Key Found\n");
    else
        printf("Key Not Found\n");    
}
