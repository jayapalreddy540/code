#include<stdio.h>
void insert_begin();
void insert_end();
void delete_begin();
void delete_end();
void display();
struct node
{
 struct node *prev;
 int data;
 struct node *next;
}*head=NULL,*tail=NULL;

main()
{
  int n;
 while(1)
 {
  printf("\n1.insert_begin \n2.insert_end \n 3.delete_begin\n");
  printf("4.delete_end\n5.display \n6.exit\n");
   scanf("%d",&n);
  switch(n)
  {
   case 1: insert_begin();break;
   case 2: insert_end();break;
   case 3: delete_begin();break;
   case 4: delete_end();break;
   case 5: display();break;
   case 6: exit(0);
   default : printf("enter a valid choice\n");
  };
 }
}

void insert_begin()
{
 int ele;
 struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert in circular list=");
   scanf("%d",&ele);
  temp->prev=NULL;
  temp->data=ele;
  temp->next=NULL;
if(head==NULL)
 {
  head=tail=temp;
  head->prev=head;
  head->next=head;
  return;
 }
   temp->next=head;
   head->prev=temp;
   tail->next=temp;
   temp->prev=tail;
   head=temp;
}
void insert_end()
{
 int ele;
 struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert at end=\n");
   scanf("%d",&ele);
  temp->prev=NULL;
  temp->data=ele;
  temp->next=NULL;
 if(head==NULL)
  {
   head=tail=temp;
   head->prev=head;
   head->next=head;
  }
   tail->next=temp;
   temp->next=head;
   head->prev=temp;
   temp->prev=tail;
   tail=temp;
}
 
void delete_begin()
{
 struct node *temp=head;
 if(head==NULL)
 {
  printf("list is empty deletion not possible\n");
  return;
 }
 if(head->next==head)
   head=tail=NULL;
 else
  {
   head=head->next;
   head->prev=tail;
   tail->next=head;
  }
  printf("\n the deleted value is=%d\n",temp->data);
  free(temp);
}
void delete_end()
{
 struct node *temp=head;
  if(tail==NULL)
   {
    printf("list is empty\n");
    return;
   }
   if(head->next==head)
    {
     head=tail=NULL;
    }
   else
    {
     tail=tail->prev;
     tail->next=head;
     head->prev=tail;
    }
     printf("deleted element is=%d\n",temp->data);
     free(temp);
 }

void display()
{
 struct node *temp=head;
 if(head==NULL)
   {
    printf("NULL\n");
    return;
   }
 printf("\nthe double circular linked list=\n"); 
  printf("%d",temp->data);
 while(temp->next!=head)
  {
   temp=temp->next;
   printf("<->%d",temp->data);
  }
}



