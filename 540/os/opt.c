#include<stdio.h>
int n;
main()
{
 int fr[5],i,j,k,m,t,s,seq[30],pos[5],find,flag,max;
 int ct=1,pf=0,p=0;
 float pfr;
 printf("\n ent max lt of seq");
 scanf("%d",&max);
 printf("ent seq");
 for(i=0;i<max;i++)
   scanf("%d",&seq[i]);
 printf("ent no of frams");
 scanf("%d",&n);
 fr[0]=seq[0];
 pf++;
 printf("%d\t",fr[0]);
 i=1;
 while(ct<n)
 {
  flag=1;
   p++;
   for(j=0;j<i;j++)
   {
    if(seq[i]==seq[j])
     flag=0;
   }
   if(flag!=0)
   {
     fr[ct]=seq[i];
     printf("\t %d",fr[ct]);
     ct++;
     pf++;
   }
  i++;
 }
 printf("\n");
 for(i=p;i<max;i++)
 {
  flag=1;
  for(j=0;j<n;j++)
   {
    if(seq[i]==fr[j])
     flag=0;
   }
  if(flag!=0)
  {
   for(j=0;j<n;j++)
   {
       m=fr[j];
   for(k=i;k<max;k++)
   {
     if(seq[k]==m)
     {
       pos[j]=k;
       break;
     }
    else                                                                                                     
       pos[j]=1;
   }
 }
 for(k=0;k<n;k++)
 {
  if(pos[k]==1)
    flag=0;
 }
 if(flag!=0)
   s=findmax(pos);
 if(flag==0)
 {
  for(k=0;k<n;k++)
  {
    if(pos[k]==1)
    {
      s=k;
     break;
    }
  }
 }
 fr[s]=seq[i];
 for(k=0;k<n;k++)
     printf("%d\t",fr[k]);
 pf++;
 printf("\n");
}
}
pfr=(float)pf/(float)max;
printf("\n page faults are%d",pf);
printf("\n page fault rate%f",pfr);
}

int findmax(int a[])
{
 int max,i,k=0;
 max=a[0];
 for(i=0;i<n;i++)
  {
   if(max<a[i])
   {
    max=a[i];
    k=i;
   }
  }
 return k;
}



