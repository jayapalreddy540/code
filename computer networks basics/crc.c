#include<stdio.h>
void reciever(int[],int);
int A[7],n,red[7];
main()
{
 int n,B[7],i,j,k,l,temp[7],temp2[7];
  printf("enter no of datawords :");
  scanf("%d",&n);
  printf("enter %d data bits",n); 
  for(i=0;i<n;i++)
      scanf("%d",&B[i]);
  printf("enter %d key bits : ",n);
   for(i=0;i<n;i++)
     scanf("%d",&A[i]);
  printf("enter %d redundant bits: ",7-n);
  for(i=n;i<7;i++)
    {
     scanf("%d",&B[i]);
    }
  for(i=0;i<7-n;i++)
    red[i]=B[n+i];
   
  for(i=0;i<n;i++)
    {
     temp2[i]=B[i];
    }
  for(i=0;i<=7-n;i++)
  {
    for(j=0;j<n;j++)
    {
      temp[j]=temp2[0]*A[j];
    }
    for(k=0;k<n;k++)
    {
      temp2[k]=temp[k]^temp2[k];
    }
    for(l=0;l<n;l++)
     {
       temp2[l]=temp2[l+1];
     }
     temp2[n-1]=B[n+i];
  }
 
 for(i=0;i<7-n;i++)
  B[n+i]=temp2[i];

 printf("enter y to modify:");
 getchar();
 char ch;
int pos;
 scanf("%c",&ch);
 if(ch=='y')
  {
    printf("enter position to modify(0-6)");
    scanf("%d",&pos);
     if(B[pos]==1)
       B[pos]=0;
     else B[pos]=1;
  }
  reciever(B,n);
}

void reciever(int B[],int n)
{
  int i;
 printf("data recieved %d\n",n);
 int m,j,k,l,temp[7],temp2[7];
  for(i=0;i<n;i++)
    temp2[i]=B[i];

  for(i=0;i<=7-n;i++)
  {
    for(j=0;j<n;j++)
    {

      temp[j]=temp2[0]*A[j];
    }
    for(k=0;k<n;k++)
    {
      temp2[k]=temp[k]^temp2[k];
    }
    for(l=0;l<n;l++)
     {
       temp2[l]=temp2[l+1];
     }
     temp2[n-1]=B[n+i];
 
  }
  for(i=0;i<(7-n);i++)
   {
    if(temp2[i]!=red[i])
      {
        printf("error");
       return;
      }
   }   
 printf("no error");

}

