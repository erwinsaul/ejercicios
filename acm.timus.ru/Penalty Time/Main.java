/*   Problem: Penalty Time
 *   Site: acm.timus.ru
 *   Code: 1636
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in= new Scanner(System.in);
	  while(in.hasNext())
	  {
		  int a=in.nextInt();
		  int b=in.nextInt();
		  int sum=0;
		  for(int k=0;k<10;k++)
		  {
			  int aux=in.nextInt();
			  sum+=(aux*20);
		  }
		  if((b-sum)<a)
		     System.out.println("Dirty debug :(");
		  else
		    System.out.println("No chance.");
	  }	
	}
}
