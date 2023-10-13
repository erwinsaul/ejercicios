/* Problem: Identity Card
 * Code: 25
 * Site: acm.hdu.edu.cn
 * Status: Pending
 * Type: Ad-Hoc - String
 */

import java.util.*;

public class Main
{
	static String ciudad(String s)
	{
		String r="";
		if(s.compareTo("33")==0)
		   r="Zhejiang";
		else if(s.compareTo("82")==0)
		   r="Macao";
		else if(s.compareTo("11")==0)
		   r="Beijing";
		else if(s.compareTo("54")==0)
		   r="Tibet";
		else if(s.compareTo("71")==0)
		   r="Taiwan";
	    else if(s.compareTo("21")==0)
		   r="Liaoning";      
		else if(s.compareTo("81")==0)
		   r="Hong Kong";
	    else if(s.compareTo("31")==0)
		   r="Shanghai";
		return r;
	}
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String c, id, birthay,dia,mes,anho;
	  int t;
	  t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  c=in.next();
		  id=c.substring(0, 6);
		  birthay=c.substring(6, 14);
		  id=ciudad(id.substring(0,2));
		  anho=birthay.substring(0,4);
		  dia=birthay.substring(4,6);
		  mes=birthay.substring(6,8);
		  System.out.println("He/She is from "+id+",and his/her birthday is on "+dia+","+mes+","+anho+" based on the table.");		  
	  }	
	}
}

