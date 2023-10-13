/*  Problem: Max of Integers
 *  Code: 001
 *  Site: acm.mipt.ru
 *  Status: Accepted
 *  Type: Ad-Hoc
 */	

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n, mayor=Integer.MIN_VALUE;
	  while(in.hasNext())
	  {
		  n=in.nextInt();
		  if(n>mayor)
		     mayor=n;
	  }	
	  System.out.println(mayor);
	}
}

