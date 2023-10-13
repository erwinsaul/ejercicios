/*   Problem:  Balanced Words I
 *   Code: 2149
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */

import java.util.*;

public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  String s;
	  char c;
	  int n=in.nextInt();
	  int u=0, l=0;
	  for(int k=0;k<n;k++)
	  {
		  s=in.next();		  		  
		  for(int i=0;i<s.length();i++)
		  {
			 c= s.charAt(i);
			  if(c >= 'A' && c <= 'Z') u++;
			  if(c >= 'a' && c <= 'z') l++;
		  }
		  if(u==l)
	       System.out.println("SI");
	      else   
	       System.out.println("NO");
	      u=0;
	      l=0;
	  }
	  
	}
}

