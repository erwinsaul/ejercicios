/*  Problem:Smallest multiple
 *  Code: problem 5
 *  Site: http://projecteuler.net/
 *  Status: Accepted
 *  Type: Math
 */

import java.util.*;

public class Main
{
	
	static long gcd(long x, long y)
	{
		if(y>0)
		 return gcd(y, x % y);
		else
		 return Math.abs(x);  
	}
	
	static long mcd(long x, long y)
	{
		return (x*y)/gcd(x,y);
	}
	

	public static void main (String args[])
	{
      Scanner in=new Scanner(System.in);
      long n=in.nextInt();		
      long t=1;
      for(long k=2;k<=n;k++)
      {
		  t=mcd(t,k);
	  }
	  System.out.println(t);
	}
}

