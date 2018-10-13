import java.util.Scanner;
import java.util.*;
import java.io.*;
public class BFS
{
	public static void main(String args[])
	{
		int i,v,e,e1,e2;
		Scanner scan=new Scanner(System.in);
		System.out.println("enter no of vertices and edges:");
		 v=scan.nextInt();
		 e=scan.nextInt();
		
		Graph g=new Graph(v);
		for(i=0;i<e;i++)
		{
			System.out.print("enter edges "+(i+1)+" : ");
			e1=scan.nextInt();
			e2=scan.nextInt();
			g.addEdge(e1,e2);
		}
		System.out.println("enter initial vertice : ");
		 int iv=scan.nextInt();
		 g.bfs(iv);
	}
}

 class Graph
{ 
   private int V;
   private LinkedList<Integer> adj[];   
	  Graph(int v)
	  {
		V=v;
		adj=new LinkedList[v];
		for(int i=0;i<v;i++)
		   adj[i]=new LinkedList<Integer>();
	  }	   
		   void addEdge(int e1,int e2)
		  {
			  adj[e1].add(e2);
		  }
	   void bfs(int iv)
	   {
		   boolean visited[]=new boolean[V];
		   LinkedList<Integer> queue= new LinkedList<Integer>();
		   visited[iv]=true;
		   queue.add(iv);
		   while(queue.size()!=0)
		   {
			   int s=queue.poll();
			   System.out.print(s+" ");
			   Iterator<Integer> i=adj[s].listIterator();
			   while(i.hasNext())
			   {
				   int n=i.next();
				   if(!visited[n])
				   {
					   visited[n]=true;
					   queue.add(n);
				   }
			   }
		   }
	   }
}
     	