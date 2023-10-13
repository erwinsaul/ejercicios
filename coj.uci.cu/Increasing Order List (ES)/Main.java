/*   Problem: Increasing Order List (ES)
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;


public class Main{
	
	public static void main (String args[])
	{
	  	Scanner in=new Scanner (System.in);
	  	Vector v=new Vector(1000);
	  	int n, a;
	  	n=in.nextInt();
	  	for(int k=0;k<n;k++)
	  	{
			a=in.nextInt();
			v.addElement(a);
		}
		Collections.sort(v);
		Iterator itr=v.iterator();
		while (itr.hasNext())
		{
		   Object e=itr.next();	
         System.out.println(e);
       }
	}
}

