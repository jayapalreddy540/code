#include<stdio.h>
#include<ctype.h>
#include<math.h>
void push(int);
int pop();
int cal(char);
 char pofx[50],top=-1,ch,elem;
 int i=0,k=0,x,y,e,a,s[50];
main()
{
 printf("postfix statement : ");
 scanf("%s",pofx);
  while((ch=pofx[i++])!='\0')
   {
    if(isdigit(ch))
	push(ch-'0');
     else
       {
 	 x=pop();
         y=pop();     
	 cal(ch);
       }
    }
 if(top==0&&ch=='\0')
  {
    a=pop();
    printf("output : %d\n",a);
  }
 else printf("invalid postfix expression\n");
}
void push(int e)
{
  s[++top]=e;
}

int pop()
{
 return s[top--];
}

int cal(char elem)
{
 switch(elem)
 {
  case '+' :push(y+x);break;
  case '-' :push(y-x);break;
  case '/' :push(y/x);break;
  case '*' :push(y*x);break;
  case '^' :push(pow(y,x));break;
  case '%' :push(y%x);break;
 default : printf("not a valid operator\n");exit(0);
 };
}    
