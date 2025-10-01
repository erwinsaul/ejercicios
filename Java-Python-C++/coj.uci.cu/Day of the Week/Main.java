/*   Problem:Day of the Week
 *   Site coj.uci.cu
 *   Code: 1625
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static int month(String cad)
	{
		int a=0;
		if(cad.compareTo("JANUARY")==0)
		    a=1;
		    if(cad.compareTo("FEBRUARY")==0)
		    a=2;
		    if(cad.compareTo("MARCH")==0)
		    a=3;
		    if(cad.compareTo("APRIL")==0)
		    a=4;
		    if(cad.compareTo("MAY")==0)
		    a=5;
		    if(cad.compareTo("JUNE")==0)
		    a=6;
		    if(cad.compareTo("JULY")==0)
		    a=7;
		    if(cad.compareTo("AUGUST")==0)
		    a=8;
		    if(cad.compareTo("SEPTEMBER")==0)
		    a=9;
		    if(cad.compareTo("OCTOBER")==0)
		    a=10;
		    if(cad.compareTo("NOVEMBER")==0)
		    a=11;
		    if(cad.compareTo("DECEMBER")==0)
		    a=12;
		    return (a-1);
	}
	
	static String day(int d)
	{
		String r="";
		if(d==2)
		  r="MONDAY";
		if(d==3)
		  r="TUESDAY";
		  if(d==4)
		  r="WEDNESDAY";
		  if(d==5)
		  r="THURSDAY";
		  if(d==6)
		  r="FRIDAY";
		  if(d==7)
		  r="SATURDAY";
		  if(d==1)
		  r="SUNDAY";

return r;
	}

	public static void main (String args[])
	{		
       Scanner in= new Scanner(System.in);
       int t=in.nextInt();
       for(int k=0;k<t;k++)
       {
		   int a=in.nextInt();
		   String m=in.next();
		   int dia=in.nextInt();
		   Calendar ahoraCal = Calendar.getInstance();
           ahoraCal.set(a,month(m),dia);
           System.out.println(day(ahoraCal.get(Calendar.DAY_OF_WEEK)));
	   }		
	}
}
