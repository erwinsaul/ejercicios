/*   Problem: Group Reverse
 *   Code: 1177
 *   Site: coj.uci.cu
 *   Status: Pending
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);	
	  while(true)
	  {
		  int n=in.nextInt();
		  if(n==0)
		     break;
		  String cad=in.next();
		  n=cad.length()/n;
		  
		  while(cad.length()>0)
		  {		  
			  
		    String sub=cad.substring(0,n);
  
//Create a StringBuffer from the original string  
 StringBuffer buffer = new StringBuffer(sub);  
  
//Reverse the contents of the StringBuffer  
buffer = buffer.reverse();     
//Convert the StringBuffer back to a String  
 String rev = buffer.toString();  
		    System.out.print(rev);
		    cad=cad.substring(n);
		  }
	      System.out.println();
	  }
	}
}
