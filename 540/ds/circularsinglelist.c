#include<stdio.h>
void insert_begin();
void insert_end();
void delete_begin();
void delete_end();
void display();
struct node
{
 int data;
 struct node *link;
}*head=NULL;

main()
{
  int n;
 while(1)
 {
  printf("\n1.insert_begin \n2.insert_end \n 3.delete_begin\n");
  printf("4.delete_end\n5.display \n6.exit\n");
  printf("enter your choice=");
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
 struct node *temp,*tp=head;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert in circular list=");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
if(head==NULL)
 {
  head=temp;
  head->link=head;
 }
 else
  {
   while(tp->link!=head)
    {
     tp=tp->link;
    }
   tp->link=temp;
   temp->link=head;
   head=temp;
  }
}

void insert_end()
{
 int ele;
 struct node *temp,*tp=head;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert at end=\n");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
 if(head==NULL)
  {
   head=temp;
   head->link=head;
  }
   else
    {
      while(tp->link!=head)
      {
       tp=tp->link;
      }
   tp->link=temp;
   temp->link=head;
  }
}
 
void delete_begin()
{
 struct node *temp=head,*tp=head;
 if(head==NULL)
 {
  printf("list is empty deletion not possible\n");
  return;
 }
 if(head->link==head)
   {
    head=NULL;
    printf("\ndeleted value=%d\n",temp->data);
    free(temp);
    return;
   }
 while(tp->link!=head)
  {
   tp=tp->link;
  }
   tp->link=head->link;
   head=head->link;
   printf("the deleted value=%d\n",temp->data);
   free(temp);
}

void delete_end()
{
 struct node *temp=head,*tp;
  if(head==NULL)
   {
    printf("list is empty\n");
    return;
   }
   if(head->link==head)
    {
     head=NULL;
     printf("deleted element is=%d\n",temp->data);
     free(temp);
     return;
    }
   while(temp->link->link!=head)
    {
     temp=temp->link;
    }
     tp=temp->link;
     temp->link=head;
     printf("deleted element is=%d\n",tp->data);
     free(tp);
 }

void display()
{
 struct node *temp=head;
 printf("circular single linked list=");
 if(head==NULL)
   {
    printf("NULL\n");
    return;
   }
  printf("%d->",temp->data);
 while(temp->link!=head)
  {
   temp=temp->link;
   printf("%d->",temp->data);
  }
}



