/*   Problem: Hangover
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner (System.in);
	  float d,n;
	  int k;
	  while(true)
	  {
		  d=in.nextFloat();
		  n=0;
		  k=0;
		  if(d==0.00)
		     break;
		  while(n<d)
		  {
			   k++;
			  n+=(float)1/(k+1);
          }
		  System.out.println(""+k+" card(s)");
	  }	
	}
}

