import java.util.*;
class Factorial
{
 public static void main(String args[])
 {
   System.out.println("enter values");
   Scanner sc =new Scanner(System.in);
    long x=sc.nextLong();
   long y=sc.nextLong();
   for(long i=x;i<=y;i++)
   {
    long ans=fact(i);
    System.out.println("Factorial of " + i + " = " + ans);
   }
 } 

static long fact(long a)
  {
    long f=a;
    if(f==1)
     return 1;
    else
     return(f*fact(f-1));
  }

}
