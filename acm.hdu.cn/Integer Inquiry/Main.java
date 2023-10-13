/* Problem: Integer Inquiry	
 * Code: 1047
 * Site: acm.hdu.edu.cn
 * Status: Accepted (5)
 * Type: Ad-Hoc - Math
 */

import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int t;
	  BigInteger n,c;	
	  t=in.nextInt();
	  int k=0;
	  String s;
	  while(k<t)
	  {
		  if(k!=0)
		     System.out.println("");
		  n=BigInteger.ZERO;
		  while(true)
		  {
			  c=in.nextBigInteger();
			  if(c.compareTo(BigInteger.ZERO)==0)
			     break;
			  
			  n=n.add(c);
		  }
		  System.out.println(n);
          k++;
	  }
	}
}

