/*    Problem: Jolly Jumpers  
 *    Site: coj.uci.cu
 *    Code: 1294
 */

import java.io.*;
import java.util.*;


public class Main
{

	public static void main (String args[])
	{		
	Scanner in= new Scanner(System.in);
	while(in.hasNext())
	{
		int n=in.nextInt();
		int[] v=new int[n];
		boolean[] a=new boolean[n];
		for(int k=0;k<n;k++)
		    v[k]=in.nextInt();
		int l=n-1;
		for(int k=1;k<n;k++)
		{
			int x=Math.abs(v[k]-v[k-1]);
			if(x<1||x>=n||a[x]) break;
			a[x]=true;
			l--;
		}
		if(l==0)
		   System.out.println("Jolly");
		else
		   System.out.println("Not jolly");
		
		
	}
		
	}
}
