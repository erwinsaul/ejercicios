/* Problem: Dubstep.
 * Code: 208-A
 * Site: codeforces.com
 * Status: Accepted / Presentation Error
 * */

import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		String s=in.nextLine();
		int l=s.indexOf("WUB");
		String[] cad=s.split("WUB");
		for(int k=0;k<cad.length;k++)
		{
		   if(cad[k]!=" ")
		   {
			 System.out.print(cad[k]+" ");
			 
		   }
		}
	    System.out.println();
		
	}
}

