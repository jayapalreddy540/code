#include<stdio.h>
main()
{
  int n,i;
   printf("enter number of process");
   scanf("%d",&n);
  int p[n],at[n],bt[n],ct[n],tat[n],wt[n],sum=0;
  float avg_tat,avg_wt,tat_sum=0,wt_sum=0;
   printf("enter process -arrival time- Burst time");
   printf("\n");
  for( i=0;i<n;i++)
   {
    printf("process %d : ",i+1);
    scanf("%d%d%d",&p[i],&at[i],&bt[i]);
   }

   for( i=0;i<n;i++)
   {
     sum=bt[i]+sum;
     ct[i]=sum;
     tat[i]=ct[i]-at[i];
     wt[i]=tat[i]-bt[i];
   }
  
   for( i=0;i<n;i++)
   {
     tat_sum=tat_sum+tat[i];
     wt_sum=wt_sum+wt[i];
   }
   avg_tat=tat_sum/n;
   avg_wt=wt_sum/n;
  
  printf("p.no   at   bt   ct   tat   wt\n");
  for( i=0;i<n;i++)
  {
    printf("%d    %d    %d    %d    %d    %d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
  }

   printf("\n\n");
   printf("average tat = %f\n",avg_tat);
   printf("average wt  = %f\n",avg_wt);
}
