/*  Problem:   Dates
 *  Code: 11356
 *  Site: uva.onlinejudge.org
 *  Type: Time / Ad-Hoc
 *  Status : Accepted
*/  

import java.util.*;

public class Main
{
	
	static int mestoint(String c)
	{
		String[] s={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		int r=0;
	    for(int k=0; k<12;k++)
	    {
			if(c.compareTo(s[k])==0)
			 {
				 r=k;
				 break;
			 }
		}
		return r;
    }
    
    static String mes(int n)
    {
		String[] s={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		return s[n];
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  int n=Integer.parseInt(in.nextLine());
	  for(int k=0;k<n;k++)
	  {
		  String s=in.nextLine();
		  int d=Integer.parseInt(in.nextLine());
		  String[] v=s.split("-");
		  int anho=Integer.parseInt(v[0]);
		  int mes=mestoint(v[1]);
		  int dia=Integer.parseInt(v[2]);
		  Calendar cal=Calendar.getInstance();
		  cal.set(anho,mes,dia);
		  cal.add(Calendar.DATE, d);
		  System.out.print("Case "+(k+1+": "));
		  System.out.print(cal.get(Calendar.YEAR));
		  System.out.print("-");
		  System.out.print(mes(cal.get(Calendar.MONTH)));
		  System.out.print("-");
		  d=cal.get(Calendar.DATE);
		  if(d<10)
		    System.out.println("0"+d);
		  else
		    System.out.println(d);
		  
	  }
	  
	  
	}
}

