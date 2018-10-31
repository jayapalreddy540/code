#include<stdio.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
int ct=0;
struct node
{
 int data;
 struct node *link;
}*front=NULL,*rear=NULL;

main()
{
  int n;
 while(1)
 {
  printf("\n1.enqueue \n2.dequeue \n3.display \n4.exit\n");
   scanf("%d",&n);
  switch(n)
  {
   case 1: enqueue();break;
   case 2: dequeue();break;
   case 3: display();break;
   case 4: exit(0);
   default : printf("enter a valid choice\n");
  };
 }
}

void enqueue()
{
 if(MAX!=ct)
 {
  ct++;
  int ele;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert in queue=");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
if(rear==NULL)
 front=rear=temp;
  else
  {
    temp->link=rear;
    rear=temp;
  }
 }
else
 printf("queue is full\n");
}

void dequeue()
{
 struct node *temp=rear,*tp=rear;
 if(front==NULL)
 {
  printf("queue is empty deletion not possible\n");
  return;
 }
   if(temp->link==NULL)
     front=rear=NULL;
   else
     {
      while(tp->link->link!=NULL)
      {
         tp=tp->link;
      }
     tp->link->link=NULL;
      front=tp->link;
     }
  ct--;
  printf("\n the deleted value is=%d\n",temp->data);
  free(temp);
}

void display()
{
 printf("\nthe stack elements are="); 
 while(front!=NULL)
{
 struct node *tp=rear;
 while(tp->link!=front)
  {
    tp=tp->link;
  }
    printf(" %d",front->data);
    front=tp;
 }
}

  

