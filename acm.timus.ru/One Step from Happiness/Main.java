/*   Problem:One Step from Happiness
 *   Site: coj.uci.cu
 *   Code: 1493
 */

import java.io.*;
import java.util.*;

public class Main{


    static int sum(int n)
    {
		int sum=n%10+(n/10)%10+(n/100)%10;
		return sum;
	}
	
    static boolean solve(String n)
    {
		String ant=n.substring(0,3); 
		String post=n.substring(3,6);
		if(ant.compareTo(post)==0)
		   return true;
		else
		{
		
		int antn=Integer.parseInt(ant);
		int postn=Integer.parseInt(post);

		int a;
		int b;
		int c;
		int d;
		if(postn+1>999)
		{
		    a=antn+1;
		    b=0;		    
		}
		else
		{
			a=antn;
			b=postn+1;
		}
		if(postn-1<0)
		{
			c=antn-1;
			d=999;
		}
		else
		{
			c=antn;
			d=postn-1;
		}
		a=sum(a);
		b=sum(b);
		c=sum(c);
		d=sum(d);
		
		if(a==b||c==d)
	       return true;
	    else
	     return false;
	    }
	}
	
	
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
	    String n;
		while(in.hasNext())
		{
		  n=in.next();
	   	  if(solve(n))
		    System.out.println("YES");
		  else
		    System.out.println("NO");
		}
	}
}
