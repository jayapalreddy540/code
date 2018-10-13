class PassingObj

{
 
public static void main(String args[])
{
  Passing s1=new Passing();
  Passing s2=new Passing();
  Passing s3=new Passing();
   s1.setx(48);
   s2.setx(32);   
   s3.pass(s1,s2);
}
}

class Passing
{
  int x;
  void setx(int a)
  {
    x=a;
  }
  void pass(Passing c,Passing d)
  {
    System.out.println(c.x+" " +d.x);
  }
}


