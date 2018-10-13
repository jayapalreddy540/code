
#define N 5
struct ext
{
 int val,pr;
}hash[N];

main()
{

  int i;
 for(i=0;i<N;i++)
 {
   printf("enter value,priority=");
   scanf("%d%d",&hash[i].val,&hash[i].pr);
 }
// for(i=0;i<N;i++)
// {
//   printf(" value,priority=");
//   printf("%d %d\n",hash[i].val,hash[i].pr);
// }
      for(i=0;i<N;i++)
        {
         for(j=0;j<N-1;j++)
          {
           if(hash[j].pr>hash[j+1].pr)
           {
                t=hash[j].pr;
                hash[j]=a[j+1];
                a[j+1]=t;
            }
          }
        }
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

