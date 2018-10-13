#include<stdio.h>
#include<ctype.h>
void push(char);
char pop();
int pr(char);
 char infx[50],pofx[50],s[50],top=-1,ch,elem;
 int i=0,k=0;
main()
{
 printf("infix statement : ");
 scanf("%s",infx);
 push('#');
  while((ch=infx[i++])!='\0')
   {
     if(ch=='(')
       push(ch);
     else if(isalnum(ch))
       pofx[k++]=ch;
     else if(ch==')')
       {
         while(s[top]!='(')
          {
             pofx[k++]=pop();
          }
        pop();
       }
     else
       {
        while(pr(s[top])>=pr(ch))
        { 
         pofx[k++]=pop();
        }
       push(ch);
       }
    }
  while(s[top]!='#')
   {
     pofx[k++]=pop();
   }
  pofx[k]='\0';
  printf("%s",pofx);
}


void push(char elem)
{
  s[++top]=elem;
}

char pop()
{
 return s[top--];
}

int pr(char elem)
{
 switch(elem)
 {
  case '#' :return 0;break;
  case '(' :return 1;break;
  case '+' :return 2;break;
  case '-' :return 2;break;
  case '/' :return 3;break;
  case '*' :return 3;break;
 };
}    
