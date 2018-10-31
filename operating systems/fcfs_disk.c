#include<stdio.h>
int main()
{
 int queue[100],n,head,i,j,seek=0,diff;
 float avg;
 printf("\nfcfs disk scheduling algorithm\n");
 printf("enter size of queue : ");
 scanf("%d",&n);
 printf("enter the queuev :");
 for(i=0;i<n;i++)
 {
   scanf("%d",&queue[i]);
 }
 printf("enter the initial head position");
 scanf("%d",&head);
 queue[0]=head;
 printf("\n");
 for(j=0;j<n-1;j++)
 {
   diff=abs(queue[j+1]-queue[j]);
   seek+=diff;
   printf("move from %d to %d with seek %d\n ",queue[j],queue[j+1],diff);
 }
 printf("total seek time is %d\n ",seek);
 avg=seek/(float)n;
 printf("average seek time is %f\t\n",avg);
 return 0;
}
