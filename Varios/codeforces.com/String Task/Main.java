/* Problem: String Task
 * Code: 118-A
 * Site: codeforces.com
 * Status: Accepted
 * */

import java.util.*;
import java.io.*;
import java.lang.*;

public class Main
{
	
	static boolean is_vowel(char c)
	{
		switch(c)
		{
			case 'a': return true;
			case 'e': return true;
			case 'i': return true;
			case 'o': return true;
			case 'u': return true;
			case 'y': return true;
		}
		return false;
	}
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  String s=in.nextLine();
	  s=s.toLowerCase();
	  int tam=s.length(),l;
     for(int k=0;k<tam;k++)
     {
		 char a=s.charAt(k);
		 if(is_vowel(a))
		 {
			l=s.indexOf(a); 
			while(l>=0)
			{
			  s=s.substring(0,l)+s.substring(l+1);
		      l=s.indexOf(a);
			}
			k=0;
		}
		 tam=s.length();
     }
     tam=s.length();
     for(int k=0;k<tam;k++)
     {
		 System.out.print("."+s.charAt(k));
	 }
     
	}
}

