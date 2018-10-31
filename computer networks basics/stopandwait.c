#include<stdio.h>
#include<stdlib.h>
main()
{
	int nframes,i,j,value,ch=0;
	printf("number of frames:");
	scanf("%d",&nframes);
	for(i=0;i<nframes;i++)
	{
		printf("\nenter the frames %d",i+1);
		scanf("%d",&value);
		ch=0;
		while(ch!=1)
		{
			printf("sender data %d\n",value);
			printf("reciever data %d\n",value);
			printf("do you want to send acknowledgment  y(1)/n(2) :");
			scanf("%d",&ch);
			if(ch==1)
			 printf("\nacknowledgment recieved for frame %d",i+1);
			 else
			 {
			 	ch=0;
			 	printf("\nwait for 2 seconds");
			 	sleep(2);
			 }
		}
	}
	printf("all frames recieved...");
}
