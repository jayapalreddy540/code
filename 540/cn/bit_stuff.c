#include<stdio.h>
main()
{
 int i=0,n,count=0,k,j,z=0;
 char A[100];
  scanf("%s",A);
  n=strlen(A);
 for(j=0;j<n+z;j++)
 {
     if(A[j]=='0')
      {   count=0;}
     else
      {
       if(count==5)
       {
        count=0;
        for(k=n+z-1;k>=j;k--)
          {
            A[k+1]=A[k];
          }
        A[j]='0';
        z++;
       }
      else
        count++;  
     }
 }
printf("\n");
 for(i=0;i<n+z;i++) 
   printf("%c",A[i]); 
printf("\n"); 
}
 
