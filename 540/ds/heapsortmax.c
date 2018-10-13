#include<stdio.h>
#include<stdlib.h>
main()
{
   int heap[50],hs[50],min,last,i,j,k,n,t,l,ele,temp;
   printf("\n how many values to be sorted\n");
   scanf("%d",&n);
   printf("\n enter %d values \n",n);
     
   for(i=1;i<=n;i++)
   {
     scanf("%d",&ele);
     heap[i]=ele;
     if(i==1) 
      continue; 
     else 
     { 
      k=i; 
      while(1) 
      { 
       l=k/2; 
       if(heap[l]>heap[k]) 
        break; 
       else 
       { 
	temp=heap[k]; 
	heap[k]=heap[l];
	heap[l]=temp; 
	k=l;
	if(k==1) 
 	 break;
       } 
      }
     } 
    }//end of for loop
    printf("\nThe given elements after heapify(insertion) are: \n"); 
    for(i=1;i<=n;i++)  
     printf("%5d",heap[i]); 
    for(i=1;i<=n;i++) 
     hs[i]=heap[i];
    //heap sort is simply deletion on root values 
    printf("\nHeap sort ascending order element are: "); 
    last=n; 
    for(l=1;l<=n;l++) 
    {
     printf("%5d",hs[1]); 
     if(last==1) 
      break;
     hs[1]=hs[last]; 
     last--; 
     if(last==1) 
      continue; 
     i=1; 
     j=2; 
     k=3; 
     while(1) 
     { 
      if(hs[i]>hs[j]&&hs[i]>hs[k]) 
       break; 
      else 
      { 
       if(hs[j]>hs[k]) 
        min=j; 
       else 
        min=k; 
       temp=hs[i]; 
       hs[i]=hs[min];
       hs[min]=temp; 
       i=min;
       j=2*i; 
       k=2*i+1;
       if(i>(last/2)) 
        break; 
       } 
      } 
     } 
    }//end of main    






 
     
