/* Problem: Aizu PR
 * Code: 0101
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: String
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s;
	  int n=Integer.parseInt(in.nextLine());
	  
	  for(int k=0;k<n;k++)	
	  {
		  s=in.nextLine();
		  System.out.println(s.replaceAll("Hoshino", "Hoshina"));   
      }
	}
}

