public class AbstractionPhone
{
  public static void main(String args[])
  {
    Xphone x=new Zphone();
    x.call();
    x.sms();
    x.browse();
    x.mediaplay();
  }
 }

abstract class Xphone
{
   public void call()
   {
    System.out.println("calling");
   }
 abstract public void sms();
 abstract public void browse();
 abstract public void mediaplay();
}

abstract class Yphone extends Xphone
{
  public void sms()
  { 
   System.out.println("messanging");
  }
}

class Zphone extends Yphone
{
  public void browse()
 {
   System.out.println("browsing...");
 }
  public void mediaplay()
 { 
   System.out.println("playing media");
 } 
}

