interface it1
{
 void sum();
 void sub();
interface it2
{
 void mul();
}
}

 public class NestedInterface
 {
   public static void main(String args[])
   {
     Interface3 a= new Interface3();
     a.sum();
     a.sub();
     a.mul();
   }
}
class Interface3 implements it1
 {
   int x=100,y=200;
   public void sum()
    {
      System.out.println("sum="+(x+y));
    }
   public void sub()
    {
     System.out.println("sub="+(x-y));
    }
   public void mul()
    {
    System.out.println("mul="+(x*y));
   }
}
