/*   Problem: Teamwork
 *   Site: acm.timus.ru
 *   Code: 1581
 */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in= new Scanner(System.in);
	  int t=in.nextInt();
	  Map<String, Integer> m = new HashMap<String, Integer>();
	  Vector  v=new Vector();
	  for(int k=0;k<t;k++)
	  {
		    int a=in.nextInt();
	        v.add(a);
	  }
	  
	  int aux=(Integer)v.elementAt(0);
	  int cant=0;
	  for(int i=0; i<v.size(); i++)
	     {
  		    if(aux==v.elementAt(i))
  		    {
				cant++;
			}
			else
			{
		      System.out.print(cant+" "+aux+" ");
              aux=(Integer)v.elementAt(i);
              cant=1;
		    }
         }
         System.out.print(cant+" "+aux);
       		  	
	}
}
