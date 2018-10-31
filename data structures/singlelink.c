#include<stdio.h>
void insert_begin();
void insert_end();
void insert_atpos();
void delete_begin();
void delete_end();
void delete_atpos();
void search();
void count_nodes();
void display();
int ch;
struct node
{
 int data;
 struct node *link;
}*head=NULL;

main()
{
 while(1)
 {
  printf("\n1.insert_begin \n2.insert_end \n3.insert_atpos \n4.delete_begin\n");
  printf("5.delete_end\n6.delete_atpos\n7.display \n8.search\n9.count_nodes\n10.exit\n");
   scanf("%d",&ch);
  switch(ch)
  {
   case 1: insert_begin();break;
   case 2: insert_end();break;
   case 3: insert_atpos();break;
   case 4: delete_begin();break;
   case 5: delete_end();break;
   case 6: delete_atpos();break;
   case 7: display();break;
   case 8: search();break;
   case 9: count_nodes();break;
   case 10: exit(0);
   default : printf("enter a valid choice\n");
  };
 }
}

void insert_begin()
{
 int ele;
 struct node *temp=head;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("enter value=");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
if(head==NULL)
 head=temp;
 else
 {
   temp->link=head;
   head=temp;
 }
}
void insert_end()
{
 int ele;
 struct node *temp,*tp=head;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("enter value=");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
 if(head==NULL)
  head=temp;
 else
 {
   while(tp->link!=NULL)
       tp=tp->link;
  tp->link=temp;
 }
}

void insert_atpos()
 {
 int pos,ele,ct=1;
 struct node *temp,*tp=head;
 temp=(struct node*)malloc(sizeof(struct node*));
 printf("enter element and position=");
 scanf("%d%d",&ele,&pos);
 temp->data=ele;
 temp->link=NULL;
 if(head==NULL&&pos==1)
   head=temp;
 else if(head==NULL)
   printf("\t invalid position\n");
 else if(pos==1)
   {
     temp->link=head;
      head=temp;
   }
  else
   {
     while(ct!=pos-1)
     {
      tp=tp->link;
      if(tp==NULL)
       {
        printf("\t invalid position\n");
          return;
       }
     }
   temp->link=tp->link;
   tp->link=temp;
  }
}

void delete_begin()
{
 struct node *temp=head;
 if(head==NULL)
 {
  printf("deletion not possible\n");
 }
 else
 {
  head=head->link;
  printf("\n the deleted value is=%d\n",temp->data);
  free(temp);
 }
}
void delete_end()
{
 struct node *temp=head;
  if(head==NULL)
    printf("deletion not possible\n");
  else if(head->link==NULL)
    {
     head=NULL;
     printf("deleted value is=%d",temp->data);
     free(temp);
    }
  else 
   {
     struct node *tp=head;
     while(temp->link->link!=NULL)
     {
        temp=temp->link;
     }
     tp=temp->link;
     temp->link=NULL;
     printf("deleted element is=%d\n",tp->data);
     free(tp);
   }
 }

void delete_atpos()
{
 int pos,ct=1;
 struct node *temp=head,*tp;
  if(head==NULL)
  {
    printf("deletion not possible\n");
  }
 printf("enter position for deletion");
scanf("%d",&pos);
if(head==NULL)
  printf("\t invalid position\n");
if(pos==1)
 {
   head=head->link;
   printf("deleted value is %d",temp->data);
   free(temp);
 }
 else
 {
  while(ct!=pos-1)
  {
   temp=temp->link;ct++;
    if(temp==NULL)
     {
      printf("\t invalid position\n");
      return;
     }
   }
  tp=temp->link;
  temp->link=temp->link->link;
  printf("\n the deleted value is=%d\n",temp->data);
 }
}

void display()
{
 struct node *temp=head;
 printf("\nthe linked list=\n"); 
 while(temp!=NULL)
  {
   printf("%d->",temp->data);
   temp=temp->link;
  }
   printf("NULL\n");
}

void count_nodes()
 {
   int ct=0;
   struct node *temp=head;
    while(temp!=NULL)
    {
      ct++;
     temp=temp->link;
    }
 printf("\t total nodes are =%d\n",ct);
}

void search()
 {
   struct node *temp=head;
   int ele ,ct=0,x=0;
   if(temp==NULL)
    {
      printf("\n no elements in the list\n");
      return;
    }
  printf("enter element for searching=");
  scanf("%d",&ele);
  while(temp!=NULL)
  {
    ct++;
    if(ele==temp->data)
     {
      printf("\telement found at %d position\n",ct);
        x=1;
     }
    temp=temp->link;
   }
  if(x==0)
  printf("not found in the list\n");
 }
