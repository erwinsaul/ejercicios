/*  Problem: An Easy Sum of Square Root
 *  Site: coj.uci.cu
 *  Code: 1497
 */


import java.io.*;
import java.util.*;

public class Main{

static double term(int n)
{
	double t;
	t=1.0+(1.0/((n-1)*(n-1)))+(1.0/(n*n));
	return t;
}


static double solve(int n)
{
	double sol=0.0;
	int k;
	for(k=2;k<=n;k++)
	{
		sol+=(double)Math.sqrt(term(k));
	}
	return sol;
}
	public static void main (String args[])
	{		
		Scanner in= new Scanner(System.in);
		while(in.hasNext())
		{
			int n=in.nextInt();
			System.out.printf("%.16f",solve(n));
		}
		
	}
}
