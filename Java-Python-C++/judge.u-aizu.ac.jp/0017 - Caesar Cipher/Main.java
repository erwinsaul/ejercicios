/* Problem: Caesar Cipher
 * Code: 0017
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: String
 */

import java.util.*;

public class Main{
	
	
	static String cipher(char[] c, int p, int t)
	{
		int aux;
		for(int k=0;k<t;k++)
		{
			if(c[k]>='a' && c[k]<='z')
			{
			 int i=c[k]-97;			
			 i=i+p;
		  	 if(i>=26)
			   i=i-26;
			 c[k]=(char)(i+97);	
			 }
			
		}
		String str = new String(c);
		return str;
	}
	
	static boolean present(String s)
	{
		if(s.indexOf("the")>-1||s.indexOf("this")>-1||s.indexOf("that")>-1)
		   return true;
		return false;
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s,t;
	  
	  while(in.hasNext())
	  {
		  s=in.nextLine();		   
          for(int k=0;k<26;k++)
          {
			  char[] cArray = s.toCharArray();
			  t=cipher(cArray,k,s.length());
			  if(present(t))
     			  System.out.println(t);		  
			  
		  }
	  }
	}
}

