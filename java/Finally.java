class Finally
{
  static void procA()
   {
    try{
   System.out.println("inside procA");
   throw new RuntimeException("demo");
   }
   finally{
     System.out.println("procA finally");
   }

}
static void procB()
 {
  try{System.out.println("inside procB");
   return;
   }
  finally{
    System.out.println("procB finally");
   }
}
static void procC()
{
 try{
 System.out.println("inside proC");
}
finally
{
 System.out.println("proC finally");
}
}

public static void main(String args[])
 {
  try{
     procA();
     }
 catch(Exception e)
  {
    System.out.println("Exception caught");
  }

procB();
procC();
}}


