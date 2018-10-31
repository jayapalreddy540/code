import java.util.*;
class MyThread extends  Thread
{
  public void run() 
  {
   for(int i=2;i<20;i=i+2)
    {
     System.out.print(i);
     try
      {
       Thread.sleep(500);
      }
     catch(InterruptedException e)
     {
     }
    }
   }
}

class SimpleThread 
{
 public static void main(String args[]) throws InterruptedException
 {
   MyThread obj=new MyThread();
   obj.start();
   for(int j=1;j<20;j=j+2)
    {
     System.out.print(j);
    Thread.sleep(500);
    }
 }
}
