#include<stdio.h>
main()
{
int ms,bs,nob,ef,n,mp[10],tif=0;
int i,p=0;
printf("enter the total memory available(in buffer)..");
scanf("%d",&ms);
printf("enter the block size( in buffer)..");
scanf("%d",&bs);
nob=ms/bs;
ef=ms-nob*bs;
printf("\n enter the no of process..");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter memo reg for process %d (in bytes).",i+1);
scanf("%d",&mp[i]);
}
printf("\n no of blocks available in memory...%d",nob);
printf("\n\nprocess  memory required  allocated  internal fragment");
for(i=0;i<n&&p<nob;i++)
{
  printf("\n%d\t\t%d",i+1,mp[i]);
  if(mp[i]>bs)
    printf("\t\tno\t\t...");
  else
  {
   printf("\t\tyes\t%d",bs-mp[i]);
   tif=tif+bs-mp[i];
   p++;
  }
}

if(i<n)
{
  printf("\n memory full remaining process cannot be allowed");
}
printf("\n\ntotal internal frag is %d",tif);
printf("\n total external fragment is %d",ef);
}
 
