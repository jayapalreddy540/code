class Exc1
 {
   public static void main(String args[])
   {
     try
      {
      int a=Integer.parseInt(args[0]);
        int b=Integer.parseInt(args[1]);
      int c=a/b;
      }
    catch(ArithmeticException e)
     {
       System.out.println("dont give the remainder as zero");
     }

    catch(NumberFormatException e)
    {
      System.out.println("give only integers as input");
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
      System.out.println("Array out of bounds");
    }
   System.out.println("program terminates.....");

 }
}

