/*  Problem:  An Inductively-Defined Function
 *  Code: 1394
 *  Site: coj.uci.cu
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
		BigInteger dos=BigInteger.valueOf(2);
		BigInteger uno=BigInteger.valueOf(1);
		BigInteger cero=BigInteger.valueOf(0);
		String n;
		BigInteger s;
		boolean flag=false;
	    while(true)
	    {
			n=in.next();
			if(n.compareTo("-1")==0)
			  break;
			s=new BigInteger(n);
			if(flag)
			  System.out.println();
			flag=true;
		    if(s.mod(dos)==cero)
		       s=s.divide(dos);
		    else
		    {
		       s=s.add(uno);
		       s=s.divide(dos);
		     }
		     System.out.println("f("+n+") = "+s);
	    }
		
	}
}

