#include<stdio.h>
int reciever(int com[]);
int c[4][4]={ {+1,+1,+1,+1},{+1,-1,+1,-1},{+1,+1,-1,-1},{+1,-1,-1,+1}};
//walsh table
//data word   0 -> -1 , 1 -> +1 , silence -> 0  
main()
{
	int i,j,d[4],dc[4][4],com[4];

	for(i=0;i<4;i++)
	{
		printf("enter data of station %d : ",i+1);
		scanf("%d",&d[i]);
	//	if(d[i]==0) d[i]=-1;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			dc[i][j]=c[i][j]*d[i];
		}
	}
	
	for(i=0;i<4;i++)
	{
		com[i]=0;
		for(j=0;j<4;j++)
		{
			com[i]=com[i]+dc[j][i];
		}
	}
		for(i=0;i<4;i++) 
			printf(" %d ",com[i]);
	int data=reciever(com);
	//if(data==-1)
	//   data=0;
	printf("station data is : %d ",data);
	
}

int reciever(int com[])
{
	int s,i,data=0;
	printf("select a station : ");
	scanf("%d",&s);
    for(i=0;i<4;i++)
    {
    	data=data+c[s-1][i]*com[i];
	}
  return (data/4);
	
}
