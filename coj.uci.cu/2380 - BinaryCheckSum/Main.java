/*   Problem:  BinaryCheckSum
 *   Code: 2380
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  int n,s=0;
	  for(int k=0;k<t;k++)
	  {
		  n=in.nextInt();
		  while(n>0)
		  {
			  s=s+n%2;
			  n=n/2;
		  }
	  }	
	  System.out.println(s);
	}
}

