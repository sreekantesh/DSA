#include <stdio.h>
#include <stdlib.h>

void add_node();
void begin_node_delete();
void last_node_delete();
void add_node_starting();
void random_node_delete();
void random_add_node();
void count_node();
void display_node();
 
 struct node 
 {
     int data;
     struct node* pre;
     struct node* next;
 };
 struct node *root=NULL;
int main()
{
    int choice=0;
    while(choice<15)
    {
        printf("Enter a choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            add_node();
            break;
            case 2:
            begin_node_delete();
            break;
            case 3:
            last_node_delete();
            break;
            case 4:
            add_node_starting();
            break;
            case 5:
            random_node_delete();
            break;
            case 6:
            random_add_node();
            break;
            case 7:
            count_node();
            break;
            case 8:
            display_node();
            break;
            default:
            break;
        }
    }
}
void add_node()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf("%d",&temp->data);
    temp->pre=NULL;
     temp->next=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node *ptr;
        ptr=root;
        while(ptr->next !=NULL)
        {
            ptr=ptr->next;
        }
        temp->pre=ptr;
        ptr->next=temp;
        
        
        
    }
}
void begin_node_delete()
{
   struct node *ptr;
   ptr=root;
   root=ptr->next;
   ptr->next=NULL;
   free(ptr);
   
}
void last_node_delete()
{
    struct node *ptr,*ptr1;
    ptr=root;
    while(ptr->next !=NULL)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    ptr->pre=NULL;
    free(ptr);
    
}
void add_node_starting()
{
 struct node *ptr;
 struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf("%d",&temp->data);
    temp->pre=NULL;
     temp->next=NULL;
 ptr=root;
 temp->next=ptr;
 ptr->pre=temp;
 root=temp;
}
void random_node_delete()
{
    struct node *ptr,*ptr1;
    int loc=0;
    int i=1;
    printf("Enter a which node need to delete\n");
    scanf("%d",&loc);
    ptr=root;
    while(i<loc-1)
    {
        ptr=ptr->next;
        i++;
    }
    ptr1=ptr->next;
    ptr->next=ptr1->next;
    ptr1->next->pre=ptr;
    ptr1->pre=NULL;
    ptr1->next=NULL;
    free(ptr1);
    
    
}
void random_add_node()
{
    struct node *ptr,*ptr1;
    int loc=0;
    int i=1;
    printf("Enter a which node need to add\n");
    scanf("%d",&loc);
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf("%d",&temp->data);
    temp->pre=NULL;
    temp->next=NULL;
    ptr=root;
    while(i<loc-1)
    {
        ptr=ptr->next;
        i++;
    }
    ptr1=ptr->next;
    temp->next=ptr1;
    temp->next->pre=temp;
    temp->pre=ptr;
    ptr->next=temp;
}   
void count_node()
{
    struct node *ptr;
    ptr=root;
    int count=0;
    while(ptr !=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    printf("%d\n",count);
}
void display_node()
{
    struct node *ptr;
    ptr=root;
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
