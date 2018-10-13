import java.util.*;
class Pascal
{
 static int b=1,res=1;

 public static void main(String args[])
 { 
  int a;
//  Scanner sc=new Scanner(System.in);
 // int m=sc.nextInt();
 // int n=sc.nextInt();
  for(int i=1;i<5;i++)
   {
    for(int j=1;j<i;j++)
     {
      int ans=rec(i)/(rec(i)*rec(i-j));
      System.out.print(ans+" ");
     }
    System.out.println();
   }  
 }
  public static int rec(int b)
  {  
    if(b==1)
     {
       return res;
     }
    else
     { 
      res=res*b;
      rec(b-1);
return res;
     }
   //return 0;
  } 
}
