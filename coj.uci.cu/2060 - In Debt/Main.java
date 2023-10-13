/*  Problem: In Debt
 *  Code: 2060
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Simulacion
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n,t,d,e;
	  while(true)
	  {
		  n=in.nextInt();
		  if(n==-1)
		    break;
		  d=0;
		  t=0;
		  for(int k=0;k<n;k++)
		  {
			  e=in.nextInt();
			  d=d+e;
			  if(d%100==0)
			     t++;
		  }
		  System.out.println(t);
	  }
	}
}

