class A
{
 
 int x,y;
A(int a,int b)
{
  x=a;y=b;
 System.out.println(x+" "+y);
 }
 public static void main(String args[])
 {
  
   A obj=new A(10,20);

  // y=y+1;
  System.out.println(obj.y+" " +obj.x);
 }
}
