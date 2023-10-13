/*  Problem: Multiples of 3 and 5
 *  Code: problem 1
 *  Site: http://projecteuler.net/
 *  Status: Accepted
 *  Type: Math
 */	

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt();
	  int m=0;
	  for(int k=1;k<n;k++)
	  {
		  if(k%3==0 || k%5==0)
		  {
			  m+=k;
		  }
	  }
	  System.out.println(m);
	  	
	}
}

