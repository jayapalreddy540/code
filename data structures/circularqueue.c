#include<stdio.h>
#define MAX 5
void dequeue(); 
void enqueue(); 
void display();
int is_Full();
int is_Empty(); 
int queue[MAX],rear=-1,front=-1,ele; 
main() 
{ 
 int ch; 
 while(1)
 { 
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n"); 
  printf("Enter your choice: "); 
  scanf("%d",&ch); 
  switch(ch) 
  { 
   case 1: enqueue(); 
	   break; 
   case 2: dequeue(); 
	   break; 
   case 3: display(); 
	   break; 
   case 4: exit(0); 
   defualt: printf("Enter a valid choice."); 
  };
 }
} 

void enqueue() 
{ 

  if(is_Full())
  {
     printf("queue is full\n "); 
   return; 
  }
 else if(is_Empty())
      {
 	front=0;
      }
 printf("enter element=");
 scanf("%d",&ele);
  queue[(rear+1)%MAX]=ele;
  rear=(rear+1)%MAX;
} 

void dequeue() 
{
 if(is_Empty())
 { 
  printf("Queue is empty."); 
  return;
 } 
 else if(front==rear)
 {
  printf("deleted is %d",queue[front]); 
  front=-1;rear=-1;
 }
 else
 {
 printf("deleted is %d",queue[front]); 
 front=(front+1)%MAX;
 }
} 

void display()
{ 
 int i=front;
 printf("The elements in the queue are: "); 
 do
 { 
  printf(" %d",queue[i]);
  i=(i+1)%MAX;
 }
 while(i!=(rear+1)%MAX);
 printf("\n");  
}
   
int is_Full()
{
 if(front==(rear+1)%MAX)
   return 1;
 else
   return 0;
}
int is_Empty()
{
 if(front==-1&&rear==-1)
  return 1;
 else
   return 0;
}

