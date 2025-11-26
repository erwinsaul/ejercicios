/*    Problem: Multiples of Nine
 *    Site: coj.uci.cu
 *    Code: 1595
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{

    static long suma(String cad)
    {
		long suma=0;
		for(int k=0;k<cad.length();k++)
		{
			suma=suma+(cad.charAt(k)-48);
		}
		return suma;
	}
    static int solve(String cad)
    {
		int c=0;
		long s=suma(cad);
		while((s%9)==0)
		{
            s=suma(cad);
			cad=Long.toString(s);
			c++;
			if(cad.length()==1)
			   break;
	    }	
	    return c;
		
	}
	public static void main (String args[])
	{		
	   Scanner in=new Scanner(System.in);
	   while(true)
	   {
		   String n=in.next();
		   if(n.compareTo("0")==0)
		       break;
		  int aux=solve(n);
		  if(aux==0)
		     System.out.println(n+" is not a multiple of 9.");
		  else
		     System.out.println(n+" is a multiple of 9 and has 9-degree "+aux+".");
	   }
	}
}
