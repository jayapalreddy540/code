#include<stdio.h>
#define max 5
void push();
void pop();
void display();
int is_Full();
int is_Empty();
void peek();
int i,n,a[10],top=-1;
main()
{
 while(1)
 {
   printf("1-insert,2-delete,3-display,4-peek,5-exit\nenter your choice=");
   scanf("%d",&n);
   switch(n)
   {
     case 1:
	    if(!is_Full());	
		push();
	    else
                printf("overflow\n");break;
     case 2:
	    if(!is_Empty())
              pop();
            else
               printf("underflow\n");break;
     case 3:display();break;
     case 4:peek();break;
     case 5:exit(0);
     default:printf("enter correct choice=\n");
   };
  }
}

void push()
{
 printf("enter element=");
 scanf("%d",&a[++top]);
}
void pop()
{
 printf("element deleted is %d\n",a[top--]);
}
void display()
{
  printf("elements are=");
  for(i=top;i>=0;i--)
   { printf(" %d",a[i]);}
    printf("\n");
}
int is_Full()
{
  if(top==max-1)
     return 1;
  else  return 0;
}
int is_Empty()
{
  if(top==-1)
   return 1;
  else return 0;
}
void peek()
{
 if(!is_Empty())
  printf("top=%d\n",a[top]);
}
  
