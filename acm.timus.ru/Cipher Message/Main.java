/*   Problem: Cipher Message
 *   Site: acm.timus.ru
 *   Code: 1654
 *   Status: Pending
 */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Main
{

    static String solve(String cad)
	{
		int j=0;
		while(j<(cad.length()-1))
		{
			 if(cad.charAt(j)==cad.charAt(j+1))
			   {
				  
				   cad=cad.substring(0,j)+cad.substring(j+2);
				   j=0;
				   
			   }
			else
			   j++;
			 
		}
		return cad;
	}
	
	public static void main (String args[]) 
	{		
	   Scanner in= new Scanner(System.in);
	   
	   String cad=in.nextLine();
	   int j=0;
	   while(j<cad.length())
	   {
		   char c=cad.charAt(j);
		   if(!Character.isLetter(c))
		        cad = cad.replaceAll(Character.toString(c), "");
		   j++;
	   }
	   
	   System.out.println(solve(cad));
	}
}
