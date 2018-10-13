#include<stdio.h>
#include<math.h>
int main()
{
    int i=-1;
float n1,n2,v1=0,v2=0,u1=0,u2=0,s1,s2,in,de,l1,l2;
scanf("%f%f",&n1,&n2);
l1=n1;l2=n2;
while(n1<n2)
{
    i++;
float f=10*((l1*l2)/((n2-n1)*(n2-n1)));
//printf("%f %f",n1,n2);
float a1,a2;
a1=roundf((f/n1)*100)/100;
a2=roundf((f/n2)*100)/100;
u1=u1+v1;
u2=u2+v2;
s1=roundf((u1+a1/2)*100)/100;
s2=roundf((u2+a2/2)*100)/100;
in=round(s1);
de=round(s2);
//printf("%f %f",in,de);
v1=u1+a1;
v2=u2+a2;
printf("%d %f %f %f %f %f %f %f %f %f %f %f %f\n",i,n1,n2,n2-n1,f,u1,u2,a1,a2,s1,s2,v1,v2);
n1=n1+in;
n2=n2-de;
}
printf("%d %d",i,i+1);
}
