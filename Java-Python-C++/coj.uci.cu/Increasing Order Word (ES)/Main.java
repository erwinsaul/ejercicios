/*
 * Problem: Increasing Order Word (ES)
 * Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner (System.in);	
	  String cad;
	  Vector v=new Vector(1000);
	  cad=in.next();
	  for(int k=0;k<cad.length();k++)
	  	{
			v.addElement(cad.charAt(k));
		}
		Collections.sort(v);
		Iterator itr=v.iterator();
		while (itr.hasNext())
		{
		   Object e=itr.next();	
         System.out.print(e);
       }
	 }
}

