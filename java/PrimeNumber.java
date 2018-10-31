import java.util.*;
class PrimeNumber
{
 public static void main(String args[])
 {
  System.out.println("enter a value for finding prime number=");
   Scanner sc=new Scanner(System.in);
   int n=sc.nextInt();
   for(int i=1,c=0;i<=n;i++)
   {
     if(n%i==0)
       c++;
     if(c>2)
      {
      System.out.println("it is a composite number");System.exit(0);
      }
}
  System.out.println("it is a prime number");
}
}
    

 
