/*   Problem: Digits
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  String num, dig="";
	  int tam,i;
	  while(true)
	  {
	     num=in.next();
	     i=0;
	     if(num.compareTo("END")==0)
	       break;
	     while(true)
	     {
			 tam=num.length();
			 dig=Integer.toString(tam);
			 if(num.compareTo(dig)==0)
			 {
				 i++;
			      break;
			 }
			 num=dig;
    		 i++;
		 }
		 
		 System.out.println(i);
      }
	}
}

