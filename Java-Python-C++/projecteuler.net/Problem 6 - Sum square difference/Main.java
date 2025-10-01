/*  Problem:Sum square difference
 *  Code: problem 6
 *  Site: http://projecteuler.net/
 *  Status: Accepted
 *  Type: Math
 */	

import java.util.*;
import java.math.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  long n=in.nextInt();
	  long s,t1=0,t2=0;
	  for(long k=1;k<=n;k++)
	  {
		  t1+=(k*k);
	  }
	  
	  s=(n*(n+1))/2;	 	  
	  t2=s*s;
	  System.out.println(t2-t1);
	}
}

