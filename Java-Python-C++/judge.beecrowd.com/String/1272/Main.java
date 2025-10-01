/*  Problem: Hidden Message 
 *  Code: 1272
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: String - 2
 */

import java.util.*;
import java.io.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);		
		String s=in.readLine(); 
		int n=Integer.parseInt(s);
		boolean sw=true;
		for(int k=0;k<n;k++)
		{
		   s=in.readLine();		  
		   for(int j=0;j<s.length();j++)
		   {
			   if(s.charAt(j)!=' ' && sw)
			   {
			      System.out.print(s.charAt(j));
			      sw=false; 
			   }
			   if(s.charAt(j)==' ' && sw==false)
			     sw=true;
			   
		   }
		   System.out.println();
		}
	}
}

