/*   Problem: Turn for MEGA
 *   Site: acm.timus.ru
 *   Code: 1787
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  
		  while(in.hasNext())
		  {
		   int k=in.nextInt();
		   int n=in.nextInt();
		   int suma=0;
		   for(int i=0;i<n;i++)
		   {
			   int a=in.nextInt();
			   if(suma+a>k)
			   	   suma=Math.abs(k-(suma+a));
			   else
			     suma=0;
		   }
		   System.out.println(suma);
	      }
	   	
	}
}
