class Join extends Thread
{ 
 public void run()
 {
   /*for(int i=1;i<=10;i++)
   {
     System.out.print(i);*/
   System.out.println("r1");
    try{
       Thread.sleep(1000);
      }
    catch(InterruptedException ie)
    {
    }
   System.out.println("r2");

   }
 }


class WithJoin 
{
 public static void main(String args[])
  {
    Join o=new Join();
    Join e=new Join();
   o.start();
  try{
     o.join();}
  catch(InterruptedException ie)
   {
   }

   e.start();
  }
} 
