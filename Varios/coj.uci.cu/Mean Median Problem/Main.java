/*    Problem: Mean Median Problem
 *    Site: coj.uci.cu
 *    Code:
 */


import java.io.*;
import java.util.*;

public class Main 
{
	static long media(long a, long b, long c)
	{
		long menor=a, mayor=a;
		if(b>mayor)
		    mayor=b;
	    if(c>mayor)
		    mayor=b;
	   if(b<menor)
		    menor=b;
		if(c<menor)
		    menor=c;
	long medio=a+b+c-menor-mayor;
	return medio;    
	}

    static long solve(long a, long b)
    {
		long m=0, c=0;
		while(true)
		{
			c=3*m-a-b;
			if(m==media(a,b,c))
			   break;
		    m=media(a,b,c);	   
		}
		return c;
	}
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		while(true)
		{
		   long a=in.nextInt();
		   long b=in.nextInt();	
		   if(a==0&&b==0)
		       break;
		   System.out.println(solve(a,b));
		}
	}
}
