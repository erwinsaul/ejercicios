/*  Problem:  SMS Typing
 *  Code: 11530
 *  Site: uva.onlinejudge.org
 *  Type: String / Simulacion
 *  Status : Accepted
 */  

import java.util.*;

public class Main
{
	
	static int value(char c)
	{
		int r=0;
		switch (c)
		{
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': r=1;break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': r=2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': r=3; break;
			case 's': case 'z': r=4; break;
			
		}
		return r;
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n=Integer.parseInt(in.nextLine());
	  int r;
	  for(int k=0;k<n;k++)
	  {
		  r=0;
		  String s=in.nextLine();
		  for(int j=0;j<(int)s.length();j++)
		  {
			  r=r+value(s.charAt(j));
		  }
		  System.out.println("Case #"+(k+1)+": "+r);
	  }	
	}
}

