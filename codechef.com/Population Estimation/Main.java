/* Problem: Population Estimation
 * Code: TSX02
 * Site: codechef.com
 * Status: Pendind
 * Type: Ad-Hoc / BigInteger
 */

import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  BigInteger n;
	  BigInteger m=BigInteger.valueOf(1000000007);	
	  int t, a;
	  t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  n=in.nextBigInteger();
		  a=in.nextInt();
		  while(a>2000)
		  {
			  n=n.multiply(n);
			  a--;
		  }
		  System.out.println(n.mod(m));
	  }
	  	  
	}
}

