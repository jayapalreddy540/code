#include<stdio.h>
void reciever(int[]);
int count_ones(int[]);
int power(int,int);
int A[8];
char synchrome[8][2]={"no","q0","q1","b0","q2","b3","b2","b1"};
/* synrome bits codeword(no error,b3,b2,b1,b0,q2,q1,q0) errors s[]=no error=>000,b3->101,b2->110,b1->111,b0->011,q2->100,q1->010,q0->001 */
main()
{
	int count,i,x,p,pos;
	char ch;
	printf("enter 4 digit code word ");
	scanf("%d%d%d%d",&A[0],&A[1],&A[2],&A[3]);
	for(i=0,x=4;i<3;i++,x++)
	   A[x]=A[i%4]^A[(i+1)%4]^A[(i+2)%4];
	
     printf("press y to modify  : ");
	 getchar();
	 scanf("%c",&ch);
	 if(ch=='y')
	  {
	  	printf("enter a position to modify(0-7) : ");
	  	scanf("%d",&pos);
	  	if(A[pos]==1) A[pos]=0;
	  	else A[pos]=1;
	  }
      reciever(A);		
}
 
void reciever(int A[])
{
	int s[3],i,syn;
	printf("data recieved\n");
	s[2]=A[4]^A[0]^A[1]^A[2];
	s[1]=A[5]^A[1]^A[2]^A[3];
	s[0]=A[6]^A[2]^A[3]^A[0];
	//printf("%d%d%d",s[2],s[1],s[0]);
	syn=s[2]*power2(2,2)+s[1]*power2(2,1)+s[0]*power2(2,0);
	 //printf("%d",syn);
	  printf("error at %c%c bit",synchrome[syn][0],synchrome[syn][1]);
}
int count_ones(int A[])
{
	int i,count=0;
	for(i=0;i<7;i++)
	{
		if(A[i]==1)
		   count++;
	}
	return count;
}

int power2(int a,int b)
{
	int i,p=1;
	for(i=1;i<=b;i++)
	  p=p*a;
 return p;
}
