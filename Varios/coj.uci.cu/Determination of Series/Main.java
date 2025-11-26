/*    Problem: Determination of Series
 *    Code: 1598
 *    Site: coj.uci.cu
 *    Status: Accepted
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
		  int n=in.nextInt();
		  int m=in.nextInt();
		  int o=in.nextInt();
		  int c=n;
		  o=o-n;
		  m=m-n;
		  int a=((2*m)-o)/-2;
		  int b=(o-(4*m))/-2;
		  System.out.print(a*3*3+b*3+c+" ");
		  System.out.print(a*4*4+b*4+c+" ");
		  System.out.println(a*5*5+b*5+c);
	  }	
	}
}
