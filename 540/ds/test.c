#include<stdio.h>
#include<ctype.h>
main()
{
char a;
scanf("%c",&a);
if(isalpha(a)>0)
{ printf("yes\n");}
else
if(isdigit(a)>0)
{ printf("num\n");}
if(isalnum(a)>0)
 printf("alpha num");
else if(ispunct(a)>0)
 printf("punctuatio");
}
