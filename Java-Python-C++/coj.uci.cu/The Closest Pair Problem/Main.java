/*Problem: The Closest Pair Problem
 *Code:1080
 *Site:coj.uci.cu
 *Status:Pending
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  
	  int a,b,n;	
	  while(true)
	  {
		  n=in.nextInt();
		  if(n==0)
		     break;
		  double[][] puntos=new double[n][2];
		  for(int k=0;k<n;k++)
		  {
			puntos[k][0]=in.nextFloat();  
			puntos[k][1]=in.nextFloat();
		  }
		  double menor=99999;
		  double d;
		  for(int k=0;k<n;k++)
		  {
			for(int j=k+1;j<n;j++)
			{
				d=Math.sqrt(Math.pow((puntos[j][0]-puntos[k][0]),2)+Math.pow((puntos[j][1]-puntos[k][1]),2));
				if(d<menor)
				   menor=d;
			}  
		  }
		  if(menor<10000)
		  {
		    System.out.printf("%.4f",menor);
		    System.out.println();
	      }
	      else
	      System.out.println("INFINITY");
	  }

 	}
}

