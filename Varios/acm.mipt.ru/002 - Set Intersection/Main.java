/*  Problem:  Set Intersection
 *  Code: 002
 *  Site: acm.mipt.ru
 *  Status: Accepted
 *  Type: Math
 */	

import java.util.*;
import java.lang.*;


public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  Set<Integer> A=new HashSet<Integer>();
	  Set<Integer> B=new HashSet<Integer>();
	  int n;
	  while(true)
	   {
		   n=in.nextInt();
		   if(n==-1)
		      break;
		   A.add(n);		   
	   }
	  while(true)
	   {
		   n=in.nextInt();
		   if(n==-1)
		      break;
		   B.add(n);		   
	   }	   
	   A.retainAll(B);
	   if(A.isEmpty())
	   {
		   System.out.println("empty");
	   }
	   else
	   {
	     for(int j:A)
	     {
			 System.out.print(j+" ");
		 }
	   } 
	}
}

