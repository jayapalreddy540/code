import java.util.*;
class ReverseNumber
{
 public static void main(String args[])
{
 Scanner scan =new Scanner(System.in);
 long n=scan.nextLong();
 long p=n,rev=0,rem=0;
   while(n!=0)
   {
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
   }
  System.out.println("Reverse="+rev);
  if (rev==p)
  System.out.println("it is a palindrome");
}
}
