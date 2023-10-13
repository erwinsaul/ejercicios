/*   Problem: Baseball Tournament
 *   Site: coj.uci.cu
 *   Code: 1457
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{

	public static void main (String args[])
	{		
	   Scanner in=new Scanner(System.in);
	   int a,b;
	   a=in.nextInt();
	   b=in.nextInt();
	   BigInteger sol=BigInteger.ZERO;
	   for(int k=1;k<a;k++)
	   {
		   BigInteger m=BigInteger.valueOf(k);
		   BigInteger n=BigInteger.valueOf(b);
		   n=n.multiply(m);
		   sol=sol.add(n);
	   }
	   System.out.println(sol);	
	}
	
}
