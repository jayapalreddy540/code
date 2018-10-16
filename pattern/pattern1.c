/* pattern
   n=2
   output:  11
   			12
   			21
   			22
*/

#include<stdio.h>
int n,x[100];
void show()
{
 int i;
 for( i=1; i<=n; i++)
  printf("%3d", x[i]);
 printf("\n");
}

void fn(int k)
{
 int i;
 for(i=1; i<=n; i++)
 {
  x[k]=i;
  if(k==n) show();
  else
  fn(k+1);
 }
}
main()
{
 scanf("%d", &n);
 fn(1);
}
























































































































































































































































































