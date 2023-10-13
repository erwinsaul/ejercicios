/*    Problem: Bishops
 *    Site: coj.uci.cu 
 *    Code: 1071	
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{

	public static void main (String args[])
	 {		
		Scanner in=new Scanner(System.in);
		while(in.hasNext())
		{
		  BigInteger n= BigInteger.ZERO;
		  BigInteger dos=BigInteger.valueOf(2);
		  BigInteger uno=BigInteger.valueOf(1);
		  n=in.nextBigInteger();
		  if(n.compareTo(uno)==0)
		    System.out.println("1");
		  else
		  {
		   n=n.subtract(uno);
		   n=n.multiply(dos);
		   System.out.println(n);
	      }
	    }
	}
}
