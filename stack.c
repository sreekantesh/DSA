/******************************************************************************

                            Sreekantesh File1
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* root=NULL;


void push(void);
void pop(void);
void display(void);
void count(void);
void delete_startingnode();
void add_randomnode();
void delete_randomnode();

int main(void)
{
int choice=0;


while(choice<10)
{
    printf("Enter a Choice\n");
    scanf("%d",&choice);
  
  switch(choice)
  {
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
      case 4:
      count();
      break;
       case 5:
      delete_startingnode();
      break;
      case 6:
      add_randomnode();
      break;
      case 7:
       delete_randomnode();
      break;
      default:
      break;
      
  }
}

    return 0;
}
void push()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root ==NULL)
    {
     temp->next=NULL;
     root=temp;
    }
    else
    {
        struct node* ptr;
        ptr=root;
        while(ptr->next !=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void pop()
{
 struct node* ptr;
 struct node* ptr1;
ptr=root;
while(ptr->next !=NULL)
{
    int data1=ptr->data;
     ptr1=ptr;
    ptr=ptr->next;
    
}
ptr1->next=NULL;
free(ptr);
}
void display()
{
    struct node* ptr;
ptr=root;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    
}
}
void count()
{
    int count=0;
 struct node* ptr;
ptr=root;
while(ptr!=NULL)
{
    ptr=ptr->next;
    count++;
}
printf("%d\n",count);
}
void delete_startingnode()
{
    struct node *ptr;
    ptr=root;
    root=ptr->next;
    ptr->next=NULL;
    free(ptr);
    
}
void add_randomnode()
{
    struct node *temp,*ptr,*ptr1;
    int i=1;
    int loc=3;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=50;
    ptr=root;
 while(i<loc-1)
 {
     ptr=ptr->next;
     i++;
 }
 ptr1=ptr->next;
 temp->next=ptr1;
 ptr->next=temp;
}
void delete_randomnode()
{
    struct node *ptr,*ptr1;
    int i=1;
    int loc=3;
    ptr=root;
 while(i<loc-1)
 {
     ptr=ptr->next;
     i++;
 }
 ptr1=ptr->next;
 ptr->next=ptr1->next;
 ptr1->next=NULL;
 free(ptr1);
   
}
