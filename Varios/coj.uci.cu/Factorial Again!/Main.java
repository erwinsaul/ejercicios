/*  Problem: Factorial Again!
 *  Site:coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static int factorial(int n)
	{
		int f=1;
		for(int k=1;k<=n;k++)
		      f=f*k;
		return f;
	}
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		String num;
		int total;
		while(true)
		{
			num=in.next();
			total=0;
			if(num.compareTo("0")==0)
			     break;
			int tam=num.length();
			for(int k=0;k<tam;k++)
			{
				total+=(num.charAt(k)-48)*factorial(tam-k);
			}
			System.out.println(total);
		}
	}
}

