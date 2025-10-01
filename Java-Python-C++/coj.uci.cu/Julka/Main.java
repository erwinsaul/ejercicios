/*    Problem: Julka
 *    Site: coj.uci.cu
 *    Code: 1407
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{

	public static void main (String args[])
	{		
	   Scanner in=new Scanner(System.in);
	   BigInteger x=BigInteger.ZERO;	
	   BigInteger y=BigInteger.ZERO;
	   BigInteger c=BigInteger.ZERO;
	   BigInteger d=BigInteger.ZERO;
	   BigInteger dos=BigInteger.valueOf(2);
	   while(in.hasNext())
	   {
		   c=in.nextBigInteger();
		   d=in.nextBigInteger(); 
		   BigInteger aux1=c.subtract(d);
		   x=aux1.divide(dos);
		   y=x.add(d);
		   System.out.println(y);
		   System.out.println(x);
	   }
	}
}
