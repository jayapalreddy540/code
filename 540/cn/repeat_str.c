#include<stdio.h>
main()
{
 int k=0,r=0,i,j;
 char ch,s1[100],rs1[100],non[100];

 printf("enter string1 : ");
 scanf("%s",s1);


 non[0]=s1[0];
 for(i=0;i<strlen(s1);i++)
 {
   ch=s1[i];
   for(j=0;j<strlen(non);j++)
   {
     if(ch==non[j])
     {
       rs1[k++]=ch;
      // nrs1[j--]='';
       break;
     }
    
   }
   if(j==strlen(non))  
   {
     non[r]=ch;
     r++;
   }

 }
printf("%d",i);
// printf("%s",rs1);
 for(i=0;i<strlen(non);i++)
  printf("%c\n",non[i]);
 printf("%s\n",rs1);
 printf("%s\n",s1);


}
