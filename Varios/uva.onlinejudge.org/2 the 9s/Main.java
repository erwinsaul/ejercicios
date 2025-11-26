/* Problem: 2 the 9s
 * Code: 10922
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math
 * Status: Accepted
*/

import java.io.*;
import java.util.*;

public class Main
{
	static int suma(String s)
	{
		int sum=0;
		for(int k=0;k<(int)s.length();k++)
		{
			sum=sum+(s.charAt(k)-48);
		}
		return sum;
	}
	public static void main (String args[]) throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);
		while(true)
		{
			String s=in.readLine();
			if(s.compareTo("0")==0)
			  break;
			if(s.compareTo("9")==0)
			   System.out.println("9 is a multiple of 9 and has 9-degree 1.");
			else
			{   
			 int sum=suma(s);
			 if(sum%9==0)
			 {
			    int g=0;
			    String aux=s;
			    while(aux.length()>1)
			    {
				   sum=suma(aux);
				   aux=Integer.toString(sum);
				   g++;
			    }	
			    System.out.println(s+" is a multiple of 9 and has 9-degree "+g+".");
		     }
		     else
		     {
		       System.out.println(s+" is not a multiple of 9.");
			 }
			
		   }  
		}
	}
}

