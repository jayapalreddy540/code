class ConstructOverload
{
 public static void main(String args[])
 {
   Item i1=new Item();
   i1.displayItem();
   Item i2=new Item(4332,"yes",10.4321f);
   i2.displayItem();

 }
}

class Item
{
 int itemno;
 String name;
 float price;
  Item()
  {
    itemno=39432;
    name="nice";
    price=10.5398f;
  }
 Item(int ino,String s,float p)
 {
  itemno=ino;
  name=s;
  price =p;
 }
 
void displayItem()
{
  System.out.println("itemno="+itemno);
 System.out.println("name="+name);
 System.out.println("price="+price);
 } 

}

