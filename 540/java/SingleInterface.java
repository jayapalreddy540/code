interface it1
{
 void sum();
 void sub();
}
 public class SingleInterface
 {
   public static void main(String args[])
   {
     Interface1 a= new Interface1();
     a.sum();
     a.sub();
   }
}

class Interface1 implements it1
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
}

