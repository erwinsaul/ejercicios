/*   Problem: Primary Arithmetic
 *   Code: 1603
 *   Site: coj.uci.cu
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{
	static int solve(long a, long b, int c)
	{
		if((a+b+c)>9)
		   return (int)(a+b+c)/10;
		return 0;
		   
	}
	
	public static void main (String args[])
	{
      Scanner in=new Scanner(System.in);		
	  long a, b;
	  int n, c;
	  while(true)
	  {
		  a=in.nextLong();
		  b=in.nextLong();
		  if(a==0 && b==0)
		    break;
		    n=0;
		    c=0;
		 while(a!=0 || b!=0)
		 {
			c=solve(a%10,b%10,c);
		    if(c>0)
		       n++;
		    a=a/10;
		    b=b/10;
		 }  
		 if(n==0)
		    System.out.println("No carry operation.");
		 else
		 {
			 if(n==1)
		       System.out.println(n+" carry operation.");
		     else
		       System.out.println(n+" carry operations.");
		  }  
	  }	
	}
}

