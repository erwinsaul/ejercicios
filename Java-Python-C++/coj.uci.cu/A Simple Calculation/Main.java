/*    Problem: A Simple Calculation
 *    Site: coj.uci.cu
 *    Code: 1070
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{

     static int square(int n)
     { 
	    int can=0;
	    for(int k=1;k<=n;k++)
	    {
	    	can+=k*k;
		}
	    return can;
     }
     static int rectangle(int n)
     {
	    int can=0;
	    for(int k=1;k<=n;k++)
	    {
	    	can+=k*k*k;
		}
	    return can;
     }

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);	
	  while(in.hasNext())
	  {
	  	int n=in.nextInt();
	  	System.out.println(square(n)+" "+rectangle(n));
	  }
	}
}
