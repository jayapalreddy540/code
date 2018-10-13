class A
{
  A()
  {
    int a=10,b=20;
    System.out.println("a+b="+(a+b));
  }
// System.out.println(a+b);
}

class B extends A
{
 B()
 {
  System.out.println("Constructor B");
 }
}
class Test 
{
 public static void main(String args[])
 {
   A obj=new B();
 }
}

