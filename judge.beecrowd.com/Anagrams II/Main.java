/*  Problem: Anagrams II
 *  Code: 630
 *  Site: uva.onlinejudge.org
 *  Type: Ad-Hoc / String
 *  Status: Wrong Answer (5)
 */

import java.io.*;
import java.util.*;

public class Main
{
	static String unir(String s)
	{
		char[] array=s.toCharArray();
		Arrays.sort(array, 0, s.length());
		s=String.valueOf(array);
		s=s.toLowerCase();
		return s;
	}
	static boolean comp(String s, String c)
	{
	   String a=unir(s);
       String b=unir(c);
	   if(a.compareTo(b)==0)
	       return true;
	   return false;
	}
	
	public static void main (String args[]) throws IOException
	{
	  InputStreamReader isr=new InputStreamReader(System.in);
	  BufferedReader bf=new BufferedReader(isr);
	  Scanner in=new Scanner(System.in);
	  int n, cases;
	  n=in.nextInt();
	  
	  String Aux;//=in.nextLine();
	  for(int k=0;k<n;k++)
	  {
		  
	    int t=in.nextInt();
	    String[] v=new String[t];
	    int j=0;
	    while(j<t)
	    {
			v[j]=in.nextLine();
			if(v[j].length()>0)
			   j++;
			
		}
		while(true)
	    {
			Aux=in.nextLine();
			cases=0;
		    if(Aux.compareTo("END")==0)
		      break;
		    System.out.println("Anagrams for: "+Aux);
		    for(int i=0;i<t;i++)
	        {
			   if(comp(Aux,v[i]))
			   {
				  if ((cases+1)<10)
				     System.out.println("  "+(cases+1)+") "+v[i]);
				  else if((cases+1)<100)
				     System.out.println(" "+(cases+1)+") "+v[i]);
				  else
				     System.out.println((cases+1)+") "+v[i]);
				  cases++;
			   }
		    }
		    
		    if(cases==0)
		       System.out.println("No anagrams for: "+Aux); 
	    }
		System.out.println();
	    
      }
	}
}

