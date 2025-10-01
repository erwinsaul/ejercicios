/* Problem: Small Factorials
 * Code: FCTRL2
 * Site: www.spoj.pl
 * Status: Accepted
 */ 

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
     Scanner in=new Scanner(System.in);
	 BigInteger[] v=new BigInteger[101];
	 v[0]=BigInteger.valueOf(1);
	 for(int k=1;k<=100;k++)
	 {
		 BigInteger c=BigInteger.valueOf(k);
		 v[k]=v[k-1].multiply(c);
	 }	
	 int t=in.nextInt();
	 int n;
	 for(int k=0;k<t;k++)
	 {
	  n=in.nextInt();
	  System.out.println(v[n]);
     }	
	}
}

