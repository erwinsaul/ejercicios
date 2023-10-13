/*   Problem: Beauty Contest
 *   Code: 2145
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  int t=in.nextInt();
	  int mayor, menor, s, n;
	  for(int k=1;k<=t;k++)
	  {
		  mayor=-99999;
		  menor=99999;
		  s=0;
		  for(int i=0;i<10;i++)
		  {
			  n=in.nextInt();
			  if(n>mayor)
			     mayor=n;
			  if(n<menor)
			     menor=n;
			  s=s+n;		     
		  }
		  System.out.println(k+" "+(s-mayor-menor));
	  }
	  
	}
}

