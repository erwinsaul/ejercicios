/* Problem: A+B Problem II
 * Code: 1002
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc - Math - BigInteger
 */

import java.util.*;
import java.math.BigInteger;



public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		BigInteger a,b,c;
		for(int k=1;k<=t;k++)
		{
			a=in.nextBigInteger();
			b=in.nextBigInteger();
			c=a.add(b);
			System.out.println("Case "+k+":");
			System.out.println(a+" + "+b+" = "+c);
			if(k!=t)
			   System.out.println("");
		}
	}
}

