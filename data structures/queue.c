#include<stdio.h>
#define MAX 5
void dequeue(); 
void enqueue(); 
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

void dequeue() 
{ 
 if(front==-1&&front>rear) 
 { 
  printf("Queue underflow.");
  return;
 } 
 printf("The element is deleted %d",queue[front++]); 
} 

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

