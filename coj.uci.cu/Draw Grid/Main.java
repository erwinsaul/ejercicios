/*    Problem: Draw Grid
 *    Site: coj.uci.cu
 *    Code: 1149
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static void print(int n, char car)
	{
		for(int i=0;i<n;i++)
		    {
			  System.out.print(car);
	    	}
	}
    static void as(int n, int d, char car)
    { 
		for(int k=0;k<n;k++)
		{
			print(d,car);
	    	System.out.println();
		}
   }

static void grid(int s, int t, int n)
{
	for(int k=0;k<(2*n+1);k++)
	{
		if(k%2==0)
		  print(t,'*');
		else
	      print(s,'.');	
    }
    System.out.println();
}

static void solve(int s,int t, int n)
{
	 int l=s*n+(n+1)*t;
	 for(int k=0;k<(2*n+1);k++)
	 {
		 if(k%2==0)
           	as(t,l, '*');	  
		 else
		 for(int i=0;i<s;i++)
		     grid(s,t,n);
	      
	 }
		  
		 
}
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int s,t,n;
	  while(true)
	  {
		  s=in.nextInt();
		  t=in.nextInt();
		  n=in.nextInt();
		  if(s==0&&t==0&&n==0)
		       break;
		 solve(s,t,n);
		   
	  }
	}
}
