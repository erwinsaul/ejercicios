/*    Problem: CAVerage
 *    Site:coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);
	   int t,n;
	   long suma;
	   int[] m=new int[50];	
	   int[] f=new int[50];
	   t=in.nextInt();
	   for(int k=0;k<t;k++)
	   {
		   n=in.nextInt();
		   suma=0;
		   for(int j=0;j<n;j++)
		   {
		       m[j]=in.nextInt();
		       suma+=m[j];
		   }
		   double pm=(double)suma/n;
		   suma=0;
		   for(int j=0;j<n;j++)
		   {
		       f[j]=in.nextInt();    
		       suma+=f[j];
		   }
		   
		   double p=(double)suma/n;
		   
		   p+=pm;
		   int cant=0;
		   for(int j=0;j<n;j++)
		   {
		      if((m[j]+f[j])<p)
		         cant++;
		   }
		   System.out.println(cant);
	   }
	}
}

