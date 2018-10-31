
class A
{
 int x=42;
 public void show()
  {
    B obj=new B();
    obj.display();
  }
 class B
 {
  public void display()
   {
    System.out.println("x="+x);
   }
 }
}

class InnerClass
{
 public static void main(String args[])
 {
   A o=new A();
   o.show();
  // o.display();
 }
}
