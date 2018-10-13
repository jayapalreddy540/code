class A
{
 int x=10,y=20;
  void display()
  {
  System.out.println("y="+y);  
 System.out.println("x="+x);
  }
}

class B extends A
{
  int x=20;
  void display()
  {
    System.out.println("x="+x);
   // super.display();
System.out.println("y="+y);
  }
}

class SubObjToSup
{
  public static void main(String args[])
  {
    A obj=new B();
   obj.display();
   }
}
