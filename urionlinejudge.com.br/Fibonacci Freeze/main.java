/* Problem:  Fibonacci Freeze
 * Code: 495
 * Site: uva.onlinejudge.org
 * Status: Pending
 */  

import java.util.*;
import java.math.BigInteger;

public class Main{
	
	static BigInteger fib(int n)
	{
		BigInteger a=BigInteger.valueOf(1);
		BigInteger b=BigInteger.valueOf(1);
		BigInteger c=BigInteger.ZERO;
		int i;
		for(i=3;i<=n;i++)
		{
			c=a.add(b);
			a=b;
			b=c;
		}
		return c;
		
	}
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  while(in.hasNext())
	  {
		  int t=in.nextInt();
		  System.out.println("The Fibonacci number for "+t+" is "+fib(t));
	  }	
	}
}

