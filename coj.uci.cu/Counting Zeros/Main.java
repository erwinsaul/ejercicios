/*     Problem: Counting Zeros
 *     Site: coj.uci.cu
 *     Code: 1627
 *     Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{
static long zero(long number, long factor)
{
	long total,deno;
	
	if(number==5) return 1;
	total=0;
	deno=factor;
	while(deno<number)
	{
		total+=number/deno;
		deno*=factor;
		
	}
	return total;
}
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
      for(int k=0;k<t;k++)
      {
		  long n=in.nextInt();
		  long c1=zero(n,2);
		  long c2=zero(n,5);
		  if(c1<c2)
		     System.out.println(c1);
		  else
		     System.out.println(c2);
		  
	  }	
	}
}
