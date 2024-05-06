/* Problem: Adding Reversed Numbers
 * Code: 713
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math / BigInteger
 * Status: Accepted
*/

import java.util.*;
import java.math.BigInteger;

public class Main
{
	static String reverse(String s)
	{
      return new StringBuffer(s).reverse().toString();
    }
	
	static String suma(String a, String b)
	{
		BigInteger n=new BigInteger(a);
		BigInteger m=new BigInteger(b);
		BigInteger c=BigInteger.ZERO;
		c=m.add(n);
		c=new BigInteger(reverse(c.toString()));
		return (c.toString());
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n;
	  n=in.nextInt();
	  String a,b,c;
	  for(int k=0;k<n;k++)
	  {
		a=in.next();  
		b=in.next();
		c=suma(reverse(a),reverse(b));
		System.out.println(c);
	  } 	
	}
}

