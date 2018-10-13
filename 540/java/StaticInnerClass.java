class AA
{
  private int x=6532;
  public void showx()
  {
   B obj=new B();
  obj.display(this);
  }
 static class B
 {
   public void display(AA ob)
   {
     System.out.println("ob.x="+ob.x);
   }
 }
}
class StaticInnerClass
{
  public static void main(String args[])
  {
    AA o=new AA();
    o.showx();
  }
} 
