/*   Problem: All in All
 *   Site: coj.uci.cu
 *   Code: 1028
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static boolean solve(String s, String t)
	{
		int tam=s.length();
		int in=0;  
		int cant=0;
		for(int k=0;k<tam;k++)
		{
			in=t.indexOf(s.charAt(k),in);
			//System.out.println(in);
			if(in!=-1)
		    {
			   cant++;
            
		    }
		    in++;
		    if(in>t.length())
		        break;
     	}
     	System.out.println(cant);
     	if(cant==s.length())
     	    return true;
     	else
     	   return false;
	}
	
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);
	   String s,t;
	   while(in.hasNext())
	   {
		   s=in.next();
		   t=in.next();
		   if(solve(s,t))
		     System.out.println("YES");
		   else
		     System.out.println("NO");
	   }	
	}
}

