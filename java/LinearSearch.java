import java.util.*;
class LinearSearch
{
 public static void main(String args[])
{

 int Array[]=new int[10];
 System.out.println("enter values=");
 Scanner sc=new Scanner(System.in); 
for(int i=0;i<10;i++)
 Array[i]=sc.nextInt();
 System.out.println("enter a value to search=");
 int k=sc.nextInt();
  boolean a=false;
 for(int i=0;i<10;i++)
   {
    if(k==Array[i])
      a=true;
   }
if(a==true)
 System.out.println("search found");
else 
  System.out.println("search not found");
}
}
