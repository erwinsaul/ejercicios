/*  Problem: 11185 - Ternary
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Math - base
 */

import java.util.*;
import java.math.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);		  
	  String n;
	  while(true)
	  {
		  n=in.next();
		  if(n.compareTo("-1")==0)
		     break;		  
		  BigInteger b=new BigInteger(n);
		  System.out.println(b.toString(3));
	  }
	}
}

