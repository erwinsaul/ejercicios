/*  Problem:  Fibonacci numbers
 *  Code: 009
 *  Site: acm.mipt.ru
 *  Status: Accepted
 *  Type: Math
 */	

import java.io.*;
import java.util.*;
import java.math.*;

public class Main
{
	
	public static void main (String args[])throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);
		BigInteger[] v=new BigInteger[1000];
		v[0]=BigInteger.valueOf(1);
		v[1]=BigInteger.valueOf(1);
		for(int k=2;k<1000;k++)
		{
			v[k]=v[k-1].add(v[k-2]);
		}
		int n=Integer.parseInt(in.readLine());
		System.out.println(v[n]);
		
	}
}

