/*  Problem: Purchase of Turkeys
 *  Site: coj.uci.cu
 */

import java.util.*;
import java.text.*; 

public class Main
{
	
	public static void main (String args[])
	{
		Vector v=new Vector();
		String price="6.789";
		String aux;
		double p;
			 DecimalFormatSymbols dformater_rules = new DecimalFormatSymbols ();
                 dformater_rules.setDecimalSeparator (',');
                 DecimalFormat dformater = new DecimalFormat ("0.00", dformater_rules);
		for(int k=1;k<=9;k++)
		{
			for(int j=0;j<=9;j++)
			{
			   	aux=Integer.toString(k)+price+Integer.toString(j);
			   	p=Double.parseDouble(aux)/72;
			   	if(!v.contains(dformater.format(p)))
				   v.add(dformater.format(p));
				   
			}
		}
		
		Iterator itr=v.iterator();
		while (itr.hasNext())
		{
		   Object e=itr.next();	
           System.out.println(e);
       }
	}
}

