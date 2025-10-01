/*  Problem:Largest palindrome product
 *  Code: problem 4
 *  Site: http://projecteuler.net/
 *  Status: Pending
 *  Type: Math
 */

import java.util.*;
import java.lang.*;

public class Main
{
	
	static boolean is_palindrome(String s)
	{
		int ant=0;
		int post=s.length()-1;
		while(ant<post)
		{
			if(s.charAt(ant)!=s.charAt(post))
			   return false;
			ant++;
			post--;
		}
		return true;
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  long n=in.nextInt();
	  long ant=(int)Math.pow(10,(n-1));
	  long pos=(int)Math.pow(10,n);
	  long mayor=Integer.MIN_VALUE;
	  for(long k=ant;k<pos;k++)
	  {
		  for(long j=ant;j<pos;j++)
		  {
			  if(is_palindrome(Long.toString(k*j)))
			  {			    
			     if((k*j)>mayor)
			        mayor=k*j;
			  }
		  }
	  }
	  System.out.println(mayor);
	}
}

