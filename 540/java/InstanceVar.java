class A
{
  int x=10;
}

class B extends A
{
 int x=20;
 void display()
 {
   System.out.println("x="+x);
   System.out.println("x="+super.x);
 }
}

class InstanceVariable
{
  public static void main(String args[])
  {
    B b=new B();
   b.display();
  }
}
