/* Problem: Translation.
 * Code: 41-A
 * Site: codeforces.com
 * Status: Accepted
 * */
import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s=in.nextLine();
	  String s1=in.nextLine();
	  s1=new StringBuffer(s1).reverse().toString();	
	  if(s.compareTo(s1)==0)
	     System.out.println("YES");
	  else
	     System.out.println("NO");
	}
}

