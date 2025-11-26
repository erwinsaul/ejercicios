/* Problem: Amusing Joke
 * Code: 141-A
 * Site: codeforces.com
 * Status: Accepted
 * */

import java.io.*;
import java.util.*;
import java.util.Arrays;
import java.lang.*;

public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String cad1=in.nextLine();	
	  String cad2=in.nextLine();
	  String cad3=in.nextLine();
	  cad1=cad1+cad2;
	  char[] c=cad1.toCharArray();
	  char[] d=cad3.toCharArray();
	  Arrays.sort(c);
	  Arrays.sort(d);
	  cad1=String.valueOf(c);
	  cad3=String.valueOf(d);
	  if(cad1.compareTo(cad3)==0)
	    System.out.println("YES");
	  else
	    System.out.println("NO");
	}
}

