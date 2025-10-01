/* Problem: Football
 * Code: 96-1
 * Site: codeforces.com
 * Status: Accepted
 * */

import java.util.*;
import java.io.*;

public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String uno="1111111";
	  String cero="0000000";
	  String cad=in.nextLine();
	  
	  if(cad.indexOf(uno)>=0||cad.indexOf(cero)>=0)
	     System.out.println("YES");
	  else
	     System.out.println("NO");
	  
	 	
	}
}

