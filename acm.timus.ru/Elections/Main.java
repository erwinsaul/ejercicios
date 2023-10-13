/*   Problem: Elections
 *   Site: acm.timus.ru
 *   Code: 1263
 */


import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	   Scanner in= new Scanner(System.in);
	   int n=in.nextInt();
	   int m=in.nextInt();
	   int[] v=new int[n];
	   for(int k=0;k<m;k++)
	   {
		   int a=in.nextInt();
		   v[a-1]++;
	   }
	   double[] nv=new double[n];
	   for(int k=0;k<n;k++)
	   {
		   nv[k]=(v[k]*100)/(double)m;
	   }
	   for(int k=0;k<n;k++)
	   {
		   System.out.printf("%.2f",nv[k]);
		   System.out.println("%");
	   }
	   	
	}
}
