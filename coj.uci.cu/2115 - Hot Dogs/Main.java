/*  Problem: Hot Dogs
 *  Code: 2115 - Hot Dogs
 *  Site: coj.uci.cu
 *  Status: WA (, en vez de punto decimal)
 *  Type: Ad-Hoc
 */


import java.util.*;
import java.text.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  double h,p;	  
	  DecimalFormatSymbols simbolos = new DecimalFormatSymbols();
      simbolos.setDecimalSeparator('.');
      DecimalFormat formateador = new DecimalFormat("#####,00",simbolos);
	  while(in.hasNext())
	  {
		  h=in.nextDouble();
		  p=in.nextDouble();		  
		  System.out.println(formateador.format(h/p));
		 // Number numero = formateador.parse(h/p);   
          //stem.out.printf("%.2f \n",numero.doubleValue());
	  }	
	}
}

