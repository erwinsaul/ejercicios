/* Problem: Word
 * Code: 59-A
 * Site: codeforces.com
 * Status: Accepted
 * */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s=in.nextLine();
	  int lower=0;
	  int upper=0;
	  
	  for(int k=0;k<(int)s.length();k++)
	  {
		  if(Character.isLowerCase(s.charAt(k)))
		    lower++;
		  else
		    upper++;
		    
	  }
	  if(lower>=upper)
	  {
		  System.out.println(s.toLowerCase());
	  }	
	  else
	    System.out.println(s.toUpperCase());
	}
}

