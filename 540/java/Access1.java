class Access
{
 private int x;
 public void givex(int y)
 {
  x=y;
 }
 public void display()
{
 System.out.println("x="+x);
  }
}
class Access1
{ 
  public static void main(String args[])
 {
  Access s=new Access();
  s.givex(10);
  s.display();
 }
}

