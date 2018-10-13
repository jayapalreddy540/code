#include<stdio.h>
int n,p,count,i,j;
int count_row_ones(int[][8],int,int);
int count_col_ones(int[][8],int,int);
void reciever(int[][8]);
main()
{
	
	printf("enter number of code words = ");
	scanf("%d",&n);
	int A[n+1][8],x;
	printf("enter code words : \n");
	for(i=0;i<n;i++)
		for(j=0;j<4;j++)
		    scanf("%d",&A[i][j]);
	for(j=0;j<n;j++)    
		for(i=0,x=4;i<n;i++,x++)
	    	A[j][x]=A[j][i%4] ^ A[j][(i+1)%4] ^ A[j][(i+2)%4];
	printf("choose 1 for odd-parity or 0 for even parity : ");
	scanf("%d",&p);
    for(i=0;i<n;i++)
     	{
     		count=count_row_ones(A,i,7);
     		if((p==0&&count%2==0)||(p==1&&count%2==1)) A[i][7]=0;
     		else A[i][7]=1;
     	}	
    for(i=0;i<8;i++)
       {
       	   count=count_col_ones(A,i,n);
     		if((p==0&&count%2==0)||(p==1&&count%2==1)) A[n][i]=0;
     		else A[n][i]=1;
	   }
	 char ch;
	 int r,c;
	 printf("press y to modify  : ");
	 getchar();
	 scanf("%c",&ch);
	 if(ch=='y')
	  {
	  	printf("enter a position to modify(row,col) : ");
	  	scanf("%d%d",&r,&c);
	  	if(A[r][c]==1) A[r][c]=0; else A[r][c]=1;
	  }
		   reciever(A);
}

void reciever(int A[][8])
{ 
  printf("data recieved\n");
	int row=-1,col=-1;
	for(i=0;i<n+1;i++)
	{
		count=count_row_ones(A,i,8);
		if((p==0&&count%2==0)||(p==1&&count%2==1)){}
                   // {printf("row[%d]: %d %d ",i,row,count);} 
		else row=i;
		
	}
	for(i=0;i<8;i++)
	{
		count=count_col_ones(A,i,n+1);
		if((p==0&&count%2==0)||(p==1&&count%2==1)){}
                  //  {printf("col[%d]: %d %d",i,col,count);}
		else col=i;
	}
      /* f
.or(i=0;i<n+1;i++)
       {
         for(j=0;j<8;j++)
           {
             printf("%d ",A[i][j]);
           }
         printf("\n");
       }*/
	if(row!=-1) printf("data corrupted at %d code-word, %d bit.",row+1,col+1);
	else printf("data is correct");
}

int count_row_ones(int A[][8],int row,int end)
{
	int i,count=0;
	for(i=0;i<end;i++)
	{
		if(A[row][i]==1)
		   count++;
	}
	return count;
}

int count_col_ones(int A[][8],int col,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(A[i][col]==1)
		   count++;
	}
	return count;
}

