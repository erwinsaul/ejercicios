/*  Problem: Easy Sum
 *  Code: 1462
 *  Site: coj.uci.cu
 *  Type: Ad-Hoc / BigInteger
 *  Status : Pending
 */

import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  BigInteger sum=BigInteger.valueOf(0);
	  BigInteger t;
	  BigInteger r=BigInteger.valueOf(128);
	  int n=in.nextInt();
	  for(int k=0;k<n;k++)
	  {
		  t=in.nextBigInteger();
		  sum=sum.add(t);
	  }	
	  System.out.println(sum.mod(r));
	}
}

