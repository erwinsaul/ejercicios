/* Problem: National Budget
 * Code: 0015
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: BigInteger
 */

import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		for(int k=0;k<t;k++)
		{
			BigInteger a=in.nextBigInteger();
			BigInteger b=in.nextBigInteger();
			BigInteger c=BigInteger.ZERO;
			c=a.add(b);
			String s=c.toString();
			int tam=s.length();
			if(tam>80)
			   System.out.println("overflow");
			else
			   System.out.println(s);
			
		}
	}
}

