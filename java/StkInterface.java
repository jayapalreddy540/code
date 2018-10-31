import java.util.*;
interface stk
{
 void push();
 void pop();
 void display();
}

class StkInterface
 {
   public static void main(String args[])
   {
    Stack1 b=new Stack1();
    Scanner scan=new Scanner(System.in);
    while(true)
    {
      System.out.println("1.push,2.pop,3.display,4.exit\nchoose=");
      int n=scan.nextInt();
      b.enter(n);
    }
   }
 }

class Stack1 implements stk
 {
  int a[]=new int[5];
  int top;
Stack1()
 {
 top=-1;
 }
  Scanner scan=new Scanner (System.in);
  void enter(int ch)
  {
   switch(ch)
   {
     case 1:push();break;
     case 2:pop();break;
     case 3:display();break;
     case 4:System.exit(0);
    }
  }
 
public void push()
 {
  if(top>=4)
   {
    System.out.println("Stack overflow");
     return;
   }
 System.out.println("enter an element=");
 int i=scan.nextInt();
  a[++top]=i;
 }

public void pop()
 {
   if(top==-1)
    {
     System.out.println("stack underflow");
     return;
    }
   System.out.println("deleted value :"+a[top--]);
 }
 
public void display()
 {
   System.out.println("stack elements are");
   for(int i=0;i<=top;i++)
    {
      System.out.println(a[i]+ " ");
    }
  }
}

