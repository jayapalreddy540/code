interface it1
{
 void sum();
 void sub();
}
interface it2
{
 void mul();
}

 public class MultipleInterface
 {
   public static void main(String args[])
   {
     Interface2 a= new Interface2();
     a.sum();
     a.sub();
     a.mul();
   }
}
class Interface2 implements it1,it2
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
