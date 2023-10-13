/* Problem: Digital Roots
 * Code: 2085
 * Site: livearchive.onlinejudge.org
 * Type: Ad-Hoc
 * Status: Accepted
 */
 
import java.util.*;
import java.io.*;
public class Main
{
	
	public static void main (String args[]) throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);
		while(true)
		{
			String n=in.readLine();
			if(n.compareTo("0")==0)
			   break;
			int sum=0;
			do
			{
			  sum=0;
			  for(int k=0;k<(int)n.length();k++)
			  {
				sum=sum+(n.charAt(k)-48);
			  }
			  n=Integer.toString(sum);	
			  
			}while(sum>=10);
			
		  System.out.println(n);
		}
	}
}

