#include<stdio.h>
#define MAX 5
void dequeue_begin(); 
void dequeue_end(); 
void enqueue_begin(); 
void enqueue_end(); 
void display(); 
int queue[MAX],rear=-1,front=-1; 
main() 
{ 
 int choice; 
 while(1)
 { 
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n"); 
  printf("Enter your choice: "); 
  scanf("%d",&choice); 
  switch(choice) 
  { 
   case 1: enqueue_begin(); break; 
   case 2: enqueue_end(); break; 
   case 3: dequeue_begin(); break;
   case 4: dequeue_end(); break; 
   case 5: display(); break; 
   case 6: exit(0); 
   defualt: printf("Enter a valid choice."); 
  };
 }
} 

void enqueue_end() 
{ 
 if(rear==MAX-1) 
 { 
  printf("Queue overflow."); 
  return; 
 }
 if(front==-1)
 { 
  front=0; 
 } 
 printf("Enter an element: "); 
 scanf("%d",&queue[++rear]); 
} 

void dequeue_begin() 
{ 
 if(front==-1&&front>rear) 
 { 
  printf("Queue underflow.");
  return;
 } 
 printf("The element is deleted %d",queue[front++]); 
} 

void enqueue_begin()
{
 if(front==-1)
   scanf("%d",&queue[++front]);
 else if(front==rear)
   printf("queue is full\n");














void display()
{ 
 int i;
 printf("The elements in the queue are: "); 
 for(i=front;i<=rear;i++) 
 { 
  printf("%4d",queue[i]);
 }
 printf("\n");  
}   

