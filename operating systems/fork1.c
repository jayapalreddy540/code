#include<stdio.h>
#include<stdlib.h>
main(void)
{
int childpid;
if(childpid=fork()==-1)
{
printf("\n cannot frok");
exit(0);
}
if(childpid==0)
{
printf("\n child :childpid =%d,parentid=%d\n",getpid(),getppid());
exit(0);
}
else
{
printf("\n parent:child pid=%d,parent pid=%d",childpid,getpid());
exit(0);
}
}


