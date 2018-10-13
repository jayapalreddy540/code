class CurrentThread extends Thread
{
  public static void main(String args[])
  {
    Thread t=Thread.currentThread();
    String s=t.getName();
    int pr=t.getPriority();
   System.out.println("name : " +s);
   System.out.println("priority : "+pr);
   Thread t1=new Thread();
   t1.setName("new"); 
   t1.setPriority(10);
   System.out.println("t1 name : "+t1.getName());
   System.out.println("t1 priority : "+t1.getPriority());
   t1.start();
   System.out.println(t1.isAlive());
   System.out.println(t1.isDaemon());
  }
 }  
