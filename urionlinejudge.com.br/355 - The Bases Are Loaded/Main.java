/*  Problem: 355 - The Bases Are Loaded
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Math - Base
 */

import java.util.*;
import java.math.*;

public class Main
{
	static boolean comprobar(String s, int b)
	{
		int aux;
	    for(int k=0;k<s.length();k++)
	    {
		 aux=(s.charAt(k)<'9')?(s.charAt(k)-48):(s.charAt(k)-'A'+10);
		 if(aux>=b)
		  return false;
	     }	
	return true;
	}
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int o,d;
		String n,s;
		while(in.hasNext())
		{
			o=in.nextInt();
			d=in.nextInt();
			n=in.next();
			if(!comprobar(n,o))
			   System.out.println(n+" is an illegal base "+o+" number");
			else
			{
			   BigInteger a=new BigInteger(n,o);
			   s=a.toString(d);  	
			   System.out.println(n+" base "+o+" = "+s.toUpperCase()+" base "+d);
			}
		}
	}
}

