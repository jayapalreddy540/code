import java.util.*;
 class MatrixMult
 {
   public static void main(String args[])
   {
     Scanner scan=new Scanner(System.in);
     System.out.println("enter rows and coloumns of matrix A=");
      int m=scan.nextInt();
     int n=scan.nextInt();
     int a[][]=new int [m][n];
     int i,j;
     System.out.println("enter matrix A=");
     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           a[i][j]=scan.nextInt();
    
      for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
           {
            System.out.print(a[i][j]+" ");
           }
          System.out.println();
        } 

     System.out.println("enter rows and coloumns of matrix B=");
      int p=scan.nextInt();
     int q=scan.nextInt();
     int b[][]=new int [p][q];
     System.out.println("enter matrix B=");
     for(i=0;i<p;i++)
        for(j=0;j<q;j++)
           b[i][j]=scan.nextInt();
    
      for(i=0;i<p;i++)
        {
          for(j=0;j<q;j++)
           {
            System.out.print(b[i][j]+" ");
           }
          System.out.println();
        
        }
  if(n==p)
  {
    int c[][]=new int[m][q];
     for(i=0;i<m;i++)
     {
       for(j=0;j<q;j++)
       {
          for(int k=0;k<p;k++)
          {
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
      }
    }
   System.out.println("c=");
   for(i=0;i<m;i++)
   {
    for(j=0;j<q;j++)
      {
        System.out.print(" "+c[i][j]);
      }
   System.out.println();
   }
  }
 else System.out.println("invalid order of matrices for multiplicaion");

}
}
