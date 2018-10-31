class Datatype1
{
  public static void main(String args[])
  {
     byte b;
     int i=257;
     double d=323.142;
     
     System.out.println("int to byte");
     b=(byte)i;
     System.out.println("i and b "+i+" "+b);
     System.out.println("double-int");
     i=(int)d;
     System.out.println("i and d "+i+" "+d);
     System.out.println("double-byte");
     b=(byte)d;
     System.out.println("b and d "+b+" "+d);
}
}
     
