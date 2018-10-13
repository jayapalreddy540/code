#include<stdio.h>
#include<string.h>
main()
{
int c=0,i;
 char s[100];
 printf("enter a string : ");
 scanf("%s",s);
 for(i=0; i<strlen(s);i++)
 {
   if(c==2)
    {
      c=0;
    }
   else 
    {
      printf("%c",s[i]);
     c++;
    }
 }
 printf("\n");
}
