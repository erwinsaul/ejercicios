/* Problem: Capitalize
 * Code: 0020
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Cadenas
 */
 
 import java.io.*;
 import java.util.*;
 
public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  while(in.hasNext())	
	  {
		  String s=in.nextLine();
		  System.out.println(s.toUpperCase());
	  }
	}
}

