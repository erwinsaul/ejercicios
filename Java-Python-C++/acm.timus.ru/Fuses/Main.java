/*   Problem: Fuses
 *   Site: acm.timus.ru
 *   Code: 1327
 */

import java.util.*;
import java.io.*;

public class Main
{
   	public static void main (String args[])
	{		
	  Scanner in= new Scanner(System.in);
	  while(in.hasNext())
	  {
		  int a=in.nextInt();
		  int b=in.nextInt();
		  int c=0;
		  for(int k=a;k<=b;k++)
		  {
			  if(k%2!=0)
			     c++;
		  }
		  System.out.println(c);
	  }	
	}
}
