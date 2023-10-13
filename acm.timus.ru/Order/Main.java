/*   Problem:Order
 *   Site: acm.timus.ru
 *   Code: 1510
 *   Status: Pending
 */

import java.io.*;
import java.util.*;



public class Main
{
	public static void main (String args[])
	{	
		 Scanner in=new Scanner(System.in);	
	  
	  int t=in.nextInt();
	  int[] v=new int[t];
	  for(int k=0;k<t;k++)
	  {
	       v[k]=in.nextInt();
	  }	
	   
      Arrays.sort(v); 
      System.out.println(v[(t+1)/2]);
	 
	}
}
