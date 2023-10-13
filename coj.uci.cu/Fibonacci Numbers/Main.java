/*  Problem: Fibonacci Numbers
 *  Code: 1596
 *  Site: coj.uci.cu
 *  Status: pending
 */

import java.io.*;
import java.util.*;

public class Main
{
	static long conquer_fibonaci(long n)
	{
		long i,h,j,k,t;
		i=h=1;
		j=k=0;
		while(n>0)
		{
			if(n%2==1)
			{
				t=j*h;
				j=i*h+j*k+t;
				i=i*k+t;
			}
			t=h*h;
			h=2*k*h+t;
			k=k*k+t;
			n=(long)n/2;
		}
		return j;
	}

	public static void main (String args[])
	{		
	   	Scanner in=new Scanner (System.in);
	   	while(in.hasNext())
	   	{
			long n=in.nextLong();
			System.out.println(conquer_fibonaci(n));
		}
	}
}
