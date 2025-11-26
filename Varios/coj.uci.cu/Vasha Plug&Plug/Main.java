/*    Problem: Vasha Plug&Plug
 *    Site: coj.uci.cu
 *    Code: 1464
 */

import java.io.*;
import java.util.*;

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
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  String cad=in.next();
		  System.out.println(solve(cad));
	  }	
	}
}
