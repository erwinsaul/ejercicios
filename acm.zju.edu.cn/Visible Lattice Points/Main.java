/* Problem:  Visible Lattice Points
 * Code: 277
 * Site: acm.zju.edu.cn
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
	  
	  int n;
	  n=in.nextInt();
	  for(int k=0;k<n;k++)
	  {
		  
		  int t=in.nextInt();
		  System.out.println((k+1)+" "+t+" "+fib(t+3));
	  }	
	}
}

