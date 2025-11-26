/*   Problem: Bijele
 *   Site:coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static int solve(int n, int a)
	{
		if(n==a)
		  return 0;
		return (a-n);
		
	}
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n, t;
	  int[] datos={1,1,2,2,2,8};
	  int[] sol=new int[6];	
	  t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  for(int i=0;i<6;i++)
		  {
			  n=in.nextInt();
			  sol[i]=solve(n,datos[i]);
		  }
		  for(int i=0;i<6;i++)
		  {
			System.out.print(""+sol[i]+" ");
     	  }
     	  System.out.println();
	  }
	}
}

