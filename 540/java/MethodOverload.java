class Policy 
{
 int policyno;
 float suminsured;
 float premium;
 String name; 
 void giveDataToPolicy(int policyno,float suminsured ,float premium,String name){
 this.policyno=policyno;
 this.suminsured=suminsured;
 this.premium=premium;
 this.name=name;
 displayDetails();
}

void giveDataToPoicy(float premium)
 {
   this.premium=premium;
displayDetails();
 }

void displayDetails()
{
  System.out.println("policy no="+policyno);
  System.out.println("suminsured="+suminsured+"  premium="+premium+"  name="+name);
  }
}
 class MethodOverload
 {
  public static void main(String args[])
  {
   Policy p=new Policy();
   p.giveDataToPolicy(1234,5000f,500f,"xyz");
  }
 }

