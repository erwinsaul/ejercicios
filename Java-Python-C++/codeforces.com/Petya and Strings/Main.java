/* Problem: Petya and Strings
 * Code: 112-A
 * Site: codeforces.com
 * Status: Accepted
 * */

import java.util.*;

public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s1=in.nextLine();
	  String s2=in.nextLine();
	  
	  if(s1.compareToIgnoreCase(s2)==0)
	    System.out.println("0");
	  else if(s1.compareToIgnoreCase(s2)<0)
        System.out.println("-1");
      else
       System.out.println("1");	  
	}
}

