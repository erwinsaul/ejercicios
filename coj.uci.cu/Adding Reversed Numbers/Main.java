/*    Problem: Adding Reversed Numbers
 *    Site: coj.uci.cu
 *    Code: 1626
 *    Status: Accepted	
 */

import java.io.*;
import java.util.*;


public class Main
{

    static int reverse(int n)
    {
		int aux=0;
		while(n>0)
		{
			aux=(aux*10)+(n%10);
			n=n/10;
		}
		return aux;
	}
	public static void main (String args[])
	{		
	   Scanner in=new Scanner(System.in);
	   int t=in.nextInt();
	   for(int k=0;k<t;k++)
	   {
		   int a=in.nextInt();
		   int b=in.nextInt();
		   System.out.println(reverse(reverse(a)+reverse(b)));
	   }	
	}
}
