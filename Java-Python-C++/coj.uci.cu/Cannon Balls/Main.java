/*   Problem: Cannon Balls
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  long n, total;
	  while(true)
	  {
		  n=in.nextInt();
		  if(n==0)
		     break;
		  total=0;
		  for(int k=1;k<=n;k++)
		  {
			  total+=k*k;
		  }
		  System.out.println(total);
	  }	
	}
}

