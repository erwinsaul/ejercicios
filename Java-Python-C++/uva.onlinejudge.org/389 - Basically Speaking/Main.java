/*  Problem: 389 - Basically Speaking
 *  Site: uva.onlinejudge.org
 *  Status: TLE
 *  Type: Math - Base
 */

import java.util.*;
import java.math.*;

public class Main
{
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int o,d;
		String n,s;
		while(in.hasNext())
		{
			n=in.next();			
			o=in.nextInt();
			d=in.nextInt();			
			BigInteger a=new BigInteger(n,o);
			s=a.toString(d);  	
			if(s.length()>7)
			   System.out.println("  ERROR");
			else
			{
			 for(int k=0;k<(7-s.length());k++)			
			   System.out.print(" ");
			 System.out.println(s.toUpperCase());
		    }
			
		}
	}
}

