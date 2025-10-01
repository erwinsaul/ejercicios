/*   Problem: Bishops
 *   Code:	BISHOPS	
 *   Site: spoj.pl
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  BigInteger n, aux;
	  BigInteger dos=BigInteger.valueOf(2);
	  while(in.hasNext())
	  {
		  n=in.nextBigInteger();
		  if(n.compareTo(dos)==-1)
		     System.out.println(n);
		  else
		  { 
			 aux=n.multiply(dos);
		     System.out.println(aux.subtract(dos));
		  }
	  }
	}
}

