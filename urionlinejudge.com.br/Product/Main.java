/* Problem: Product  
 * Code: 10106
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */ 

import java.util.*;
import java.io.*;
import java.math.BigInteger;

public class Main{
	
	public static void main (String args[])
	{
      Scanner in=new Scanner(System.in);
	  BigInteger a;
	  BigInteger b;
	  while(in.hasNext())
	  {
		  a=in.nextBigInteger();
		  b=in.nextBigInteger();
		  System.out.println(a.multiply(b));
	  }	
	}
}

