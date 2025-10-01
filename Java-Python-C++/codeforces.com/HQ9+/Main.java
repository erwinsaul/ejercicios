/* Problem: HQ9+
 * Code: 133 - A
 * Site: codeforces.com
 * Status: Accepted
 * */    

import java.util.*;
import java.io.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String cad=in.nextLine();
	  if(cad.indexOf("H")>=0||cad.indexOf("Q")>=0||cad.indexOf("9")>=0)
	     System.out.println("YES");
	  else	
	     System.out.println("NO");
	}
}

