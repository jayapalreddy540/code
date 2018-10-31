#include<stdio.h>
main()
{
 int i=0,n,count=0,k,j,z=0,p;
 char A[100],a;
  scanf("%s",A);
  n=strlen(A);
  getchar();
  scanf("%d",&p);
  getchar();
  scanf("%c",&a);
 // printf("%d%c",p,a);
 for(j=0;j<n+z;j++)
 {
    
       if(count==p)
       {
        count=0;
        for(k=n+z-1;k>=j;k--)
          {
            A[k+1]=A[k];
          }
        A[j]=a;
        z++;
       // printf("\n%d%c",j,a);
       }
      else count++;
       
     
 }
printf("\n");
printf("dlestx");
 for(i=0;i<n+z;i++) 
   printf("%c",A[i]);
printf("dleedx"); 
printf("\n"); 
}
 
