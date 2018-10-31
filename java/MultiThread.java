class Odd extends Thread
{ 
 public void run()
 {
   for(int i=1;i<=20;i=i+2)
   {
     System.out.print(i);
    try{
       Thread.sleep(1000);
      }
    catch(InterruptedException ie)
    {
    }

   }
 }
}

class Even extends Thread
{
 public void run()
 {
  for(int i=2;i<=20;i=i+2)
  {
   System.out.println(i); 
  try
  { Thread.sleep(1000);
    }
  catch(InterruptedException ie)
  {
  }
  }
 }
}

class MultiThread 
{
 public static void main(String args[])
  {
    Odd o=new Odd();
    Even e=new Even();
   o.start();
   e.start();
  }
} 
