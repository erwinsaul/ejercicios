/*   Problem: The Size is Not Important
 *   Code: 1592
 *   Site: coj.uci.cu
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.math.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  BigInteger a=in.nextBigInteger();
		  BigInteger b=in.nextBigInteger();
		  a=a.multiply(b);
		  System.out.println(a);
	  }	
	}
}
