class Throws
{
 void throwone() throws IllegalAccessException,ArithmeticException
 {
   int a=1/0;

   throw new ArithmeticException("Arithmetic");
 }
  void throwtwo() throws Exception
  {
    System.out.println("inside throwone ");

   throw new IllegalAccessException("demo");
  }

public static void main(String args[]) throws Exception
 {
  Throws s=new Throws();
    try{
        s.throwtwo();
      }
   catch(IllegalAccessException e)
    {
     System.out.println("caught :"+e);
    }
    try{
        s.throwone();
      }
   catch(ArithmeticException e)
   {
     System.out.println("caught :"+e);
   }
}}

