#include<stdio.h>
main()
{
 int arr,i;
 printf("enterr size of array : ");
 scanf("%d",&arr);
 int ar[arr];
 printf("enter elements");
 for(i=0;i<arr;i++)
    scanf("%d",&ar[i]);
 printf("your array: ");
 for(i=0;i<arr;i++)
   printf(" %d ",ar[i]);
}
 
