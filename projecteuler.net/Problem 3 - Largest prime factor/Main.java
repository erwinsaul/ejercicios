/*  Problem:Largest prime factor
 *  Code: problem 3
 *  Site: http://projecteuler.net/
 *  Status: Accepted
 *  Type: Math
 */


import java.util.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		long n=in.nextLong();
		int j=2;
		while(n>1)
		{
			if(n%j==0)
			{
			 while((n%j)==0)
			 {
				n=n/j;
			 }
			 System.out.println(j);
		    }
			j++;
		}
	}
}

