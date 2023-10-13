/* Problem:500!
 * Code: 623
 * Site: uva.onlinejudge.org
 * Status: Accepted
 * Type: BigInteger
 */

import java.util.*;
import java.math.*;


public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		BigInteger[] f=new BigInteger[1001];
		BigInteger s;
		int n;
		f[0]=BigInteger.valueOf(1);
		for(int k=1;k<=1000;k++)
		{
			s=BigInteger.valueOf(k);
			f[k]=f[k-1].multiply(s);
		}
		while(in.hasNext())
		{
			n=in.nextInt();
			System.out.println(n+"!");
			System.out.println(f[n]);
		}
	}
}

