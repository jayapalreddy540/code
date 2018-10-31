#include<stdio.h>
main()
{
 char s[100];
 int i; 
 printf("enter a string :");
 scanf("%s",s);
 int n=strlen(s); 
 for(i=0;i<n/2;i++)
 {
   if(s[i]!=s[n-1-i])
     {
       printf("not a palindrome..\n");
       return;
     }
  }
 printf("it is palindrome..\n ");
}
