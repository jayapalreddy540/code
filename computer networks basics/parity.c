#include<stdio.h>
main()
{
 int n,i,count=0,c=0,p;
 char A[8],a;
 printf("enter 4 binary bits \n");
 scanf("%s",A);
 A[4]=(int)A[0]^(int)A[1]^(int)A[2];
 A[5]=(int)A[1]^(int)A[2]^(int)A[3];
 A[6]=(int)A[2]^(int)A[3]^(int)A[0];
 for(i=0;i<7;i++)
   if(A[i]=='1')
     count++;
 printf("enter 0->even parity 1->odd parity\n");
 scanf("%d",&p);
  if(p==0)
  {
   if(count%2==0) A[7]='0';
   else A[7]='1';
  }
  else if(p==1)
  {
   if(count%2==0) A[7]='1';
   else A[7]='0';
  }
 
 printf("press y to  modify : ");
 getchar();
 scanf("%c",&a);
 if(a=='y')
   {
     printf("enter position to modify: ");
     scanf("%d",&n);
     if(A[n]=='1')
         A[n]='0';
      else A[n]='1';
   }

  for(i=0;i<8;i++)
    {
      if(A[i]=='1')
          c++;
    }
  if(p==0&&c%2==0) printf("data is safe\n");
  else if(p==1&&c%2==1) printf("data is safe\n");
  else printf("there are some errors in data\n");     
}
