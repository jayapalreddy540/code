#include<stdio.h>
#define max 5
void push();
void pop();
void display();
int i,n,a[10],top=-1;
main()
{
 while(1)
 {
   printf("1-insert,2-delete,3-display,4-exit\nenter your choice=");
   scanf("%d",&n);
   switch(n)
   {
     case 1:push();break;
     case 2:pop();break;
     case 3:display();break;
     case 4:exit(0);
     default:printf("enter correct choice=\n");
   };
  }
}

void push()
{
  if(top==max-1)
   {
    printf("overflow\n");
    return;
   }
 printf("enter element=");
 scanf("%d",&a[++top]);
}
void pop()
{
 if(top==-1)
 {
  printf("underflow\n");
  return;
 }
 printf("element deleted is %d\n",a[top--]);
}
void display()
{
  printf("elements are=");
  for(i=top;i>=0;i--)
   { printf(" %d",a[i]);}
    printf("\n");
}
