/*  Problem: Anagrams
 *  Code: 454
 *  Site: uva.onlinejudge.org
 *  Type: Ad-Hoc / String
 *  Status: Runtime Error
 */

import java.io.*;
import java.util.*;

public class Main
{
	static String unir(String[] s)
	{
		String c="";
		for(int k=0;k<(int)s.length;k++)
		{
			c=c+s[k];
		}
		char[] array=c.toCharArray();
		Arrays.sort(array, 0, c.length());
		c=String.valueOf(array);
		c=c.toLowerCase();
		return c;
	}
	static boolean comp(String s, String c)
	{
	   String[] v=s.split(" ");	
	   String[] w=c.split(" ");	
       String a=unir(v);
       String b=unir(w);
	   if(a.compareTo(b)==0)
	       return true;
	   return false;
	}
	
	public static void main (String args[]) throws IOException
	{
	  InputStreamReader isr=new InputStreamReader(System.in);
	  BufferedReader in=new BufferedReader(isr);
	  int n;
	  n=Integer.parseInt(in.readLine());
	  String[] v=new String[100];
	  String Aux=in.readLine();
	  for(int k=0;k<(n+1);k++)
	  {
	  
	    int j=0;
	    while((Aux= in.readLine())!=null)
	    {
			v[j]=Aux;
		    if(Aux.isEmpty())
		      break;
		    j++;
	    }
	    for(int i=0;i<j;i++)
	    {
			String p=v[i];
			for(int m=(i+1);m<j;m++)
			{
				if(comp(p,v[m]))
				  System.out.println(p+" = "+v[m]);
			}
	
		}
		System.out.println();
	    
      }
	}
}

