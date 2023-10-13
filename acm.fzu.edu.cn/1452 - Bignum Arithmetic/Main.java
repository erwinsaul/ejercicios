/* Problem: Bignum Arithmetic 
 * Code: 1452
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc / BigInteger
 */  

import java.util.*;
import java.math.*;
public class Main{
	
	public static void main (String args[])
	{
	  Scanner in= new Scanner(System.in);
	  BigInteger a,b;
	  while(in.hasNext())
	  {
		  a=in.nextBigInteger();
		  b=in.nextBigInteger();
		  System.out.println(a.multiply(b));
	  }
	  	
	}
}

