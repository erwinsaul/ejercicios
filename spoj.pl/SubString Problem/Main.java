/* Problem: SubString Problem
 * Code: 6898 SUB_PROB
 * Site:spoj.pl
 * Type: String
 * Status: Pending
 */

import java.io.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
	  InputStreamReader isr=new InputStreamReader(System.in);
	  BufferedReader in=new BufferedReader(isr);
	  String s=in.readLine();
	  String b;
	  int n=Integer.parseInt(in.readLine());
	  for(int k=0;k<n;k++)
	  {
		  b=in.readLine();
		  if(s.indexOf(b)>=0)
		     System.out.println("Y");
		  else
		     System.out.println("N");
	  }
	  	
	}
}

