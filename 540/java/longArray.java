import java.util.*;
class longArray
{
public static void main(String args[])
{
int n;
System.out.println("enter the size");
Scanner v=new Scanner (System.in);
n=v.nextInt();
long a[]=new long[n];
int i;
System.out.println("enter the values");
for(i=0;i<n;i++)
{
a[i]=v.nextLong();
}
for(i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}

