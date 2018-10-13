#include<stdio.h>
main()
{
int ms,mp[10],i,temp,n=0;
int choi=1;
printf("enter the total memory available ");
scanf("%d",&ms);
temp=ms;
for(i=0;choi==1;i++,n++)
{
printf("\n enter the memory req for process %d",i+1);
scanf("%d",&mp[i]);
if(mp[i]<=temp)
{
printf("\n memory is allocated for process %d",i+1);
temp=temp-mp[i];
}
else
{
printf("\n memory is full");
break;
}
printf("\n enter choice ");
scanf("%d",&choi);
}
printf("\n\ntotal memory available %d",ms);
printf("\n\n\tprocess\t\tmemoryallocated");
for(i=0;i<n;i++)
printf("\n\t%d\t%d",i+1,mp[i]);
printf("\n total memory allocated is %d",ms-temp);
printf("\n total external frag is %d",temp);
}

