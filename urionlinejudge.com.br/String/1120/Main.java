/*  Problem: Contract Revision
 *  Code: 1120
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

import java.util.*;
import java.math.*;
public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String n;
	  String s,r;
	  while(true)
	  {
		  n=in.next();
		  s=in.next();
		  if(n.compareTo("0")==0 && s.compareTo("0")==0)
		     break;
		  r=s.replace(n,"");
		  if(r.length()==0)
		     r="0";
		  BigInteger b= new BigInteger(r);
		  System.out.println(b);
	  }	
	}
}

