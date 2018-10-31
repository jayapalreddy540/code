import java.util.*;
class LimitPrimeNumber
{
 public static void main(String args[])
 {
  System.out.println("enter limits for finding prime numbers=");
   Scanner sc=new Scanner(System.in);
   int n=sc.nextInt();
   int m=sc.nextInt();
  for(int j=n;j<=m;j++)
  {
   int c=0;
    for(int i=1;i<=j;i++)
    {
      if(j%i==0)
        c++;
    }
    if(c<=2)
       {
       System.out.print(" "+j);
       }
    

  }
}
    
}
 
