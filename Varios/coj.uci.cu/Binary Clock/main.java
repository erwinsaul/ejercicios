/*   Problem: Binary Clock
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);
	   String cad;
	   int n=in.nextInt();
	   for(int k=0;k<n;k++)
	   {
		   cad=in.next();
		   String[] s=cad.split("[(]");
		   System.out.println(s[1]);
		  
	   }
	}
}

