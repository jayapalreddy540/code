#include<stdio.h>
#define MAX 5
void push();
void pop();
void display();
int ct=0;
struct node
{
 int data;
 struct node *link;
}*top=NULL;

main()
{
  int n;
 while(1)
 {
  printf("\n1.push \n2.pop \n3.display \n4.exit\n");
   scanf("%d",&n);
  switch(n)
  {
   case 1: push();break;
   case 2: pop();break;
   case 3: display();break;
   case 4: exit(0);
   default : printf("enter a valid choice\n");
  };
 }
}

void push()
{
 if(MAX!=ct)
 {
  ct++;
  int ele;
  struct node *temp=top;
  temp=(struct node *)malloc(sizeof(struct node *));
  printf("\tenter value to insert in stack=");
   scanf("%d",&ele);
  temp->data=ele;
  temp->link=NULL;
if(top==NULL)
 top=temp;
  else
  {
    temp->link=top;
    top=temp;
  }
 }
else
 printf("stack overflow\n");
}
void pop()
{
 struct node *temp=top;
 if(top==NULL)
 {
  printf("stack is empty deletion not possible\n");
  return;
 }
   if(top->link==NULL)
     top=NULL;
   else
     top=top->link;
  ct--;
  printf("\n the deleted value is=%d\n",temp->data);
  free(temp);
}

void display()
{
 struct node *temp=top;
 printf("\nthe stack elements are="); 
 while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->link;
  }
}



