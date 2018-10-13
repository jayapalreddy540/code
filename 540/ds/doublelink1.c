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
  printf("\n1.insert_begin \n2.insert_end \n3.insert_atpos \n4.delete_begin\n");
  printf("5.delete_end\n6.delete_atpos\n7.display \n8.search\n9.count_nodes\n");  printf("10.exit\n");
   scanf("%d",&n);
  switch(n)
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
 struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert at beginning =\n");
   scanf("%d",&ele);
  temp->prev=NULL;
  temp->data=ele;
  temp->next=NULL;
if(head==NULL)
 head=tail=temp;
 else
 {
   temp->next=head;
   head->prev=temp;
   head=temp;
 }
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
  head=tail=temp;
 else
 {
   tail->next=temp;
   temp->prev=tail;
   tail=temp;
 }
}

void insert_atpos()
 {
 int pos,ele,ct=1;
 struct node *temp,*tp=head;
 printf("enter element and position=");
 scanf("%d%d",&ele,&pos); 
  temp->prev=NULL;
  temp->data=ele;
  temp->next=NULL;
 if(head==NULL&&pos==1)
    head=tail=temp;
 else if(head==NULL)
     printf("\t invalid position\n");
 else if(pos==1)
  {
   temp->next=head;
   head->prev=temp;
   head=temp;
  }
 else
  {
    while(ct!=pos-1)
    {
     tp=tp->link;
     ct++;
     if(tp==NULL)
      {
        printf("\tinvalid position\n");
        return;
      }
    }
   temp->next=tp->next;
   temp->prev=tp;
   tp->next->prev=temp;
   tp->next=temp;
  }
}

void delete_begin()
{
 struct node *temp=head;
 if(head==NULL)
 {
  printf("list is empty deletion not possible\n");
  return;
 }
 if(head->next=NULL)
   head=tail=NULL;
 else
 {
  head=head->next;
  head->prev=NULL;
 }
  printf("\n the deleted value is=%d\n",temp->data);
  free(temp);
}

void delete_end()
{
 struct node *temp=head;
  if(head==NULL)
   {
    printf("link is empty deletion not possible\n");
    return;
   }
   if(head->next==NULL)
     head=tail=NULL;
  else 
   {
     tail=tail->prev;
     tail->next=NULL;
   }
   printf("deleted element is=%d\n",tp->data);
   free(temp);
   }
 }

void delete_atpos()
 {
 int pos,ct=1;
 struct node *temp,*var=head;
 if(head==NULL)
  {
   printf("\tlist is empty cannot delete\n");
   return;
  }
 printf("\tenter position=");
 scanf("%d",&pos);
 if(head==tail&&pos!=1)
  {
   printf("invalid position\n");
   return;
  }
  if(head==tail&&pos==1)
   {
    temp=head;
    head=tal=NULL;
    printf("\t deleted value=%d\n",temp->data);
    free(temp);
    return;
   } 
    if(pos==1)
     {
      temp=head; 
      head=head->next;
      head->prev=NULL;
      printf("the deleted value of list=%d\n",temp->data);
      free(temp);
      return;
     }
   while(ct!=pos)
    {
     var=var->link;
     ct++;
     if(var==NULL)
      {
        printf("\tinvalid position\n");
        return;
      }
    }
   temp=var;
   var=var->prev;
   if(temp->next=NULL)
    {
     var->next=NULL;
     var->prev=NULL;
     tail=var;
    }
   else
   {
    var->next=temp->next;
    temp->next->prev=var;
    temp->next=temp->prev=NULL;
   }
  printf("\t the deleted value=%d",temp->data);
  free(temp);
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



