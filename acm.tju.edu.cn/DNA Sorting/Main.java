/* Problem: DNA Sorting 
 * Code: 1127
 * Site: acm.tju.edu.cn
 * Status:Pending
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
	  Scanner in=new Scanner (System.in);
	  int n=in.nextInt();	
	  int m=in.nextInt();
	  int[][] datos=new int[m][n];
	  for(int k=0;k<m;k++)
	  {
		  for(int i=0;i<n;i++)
		  {
		     datos[k][i]=System.in.read();
		  }
	  }
	  
	  for(int k=0;k<m;k++)
	  {
		  for(int i=0;i<n;i++)
		  {
		     System.out.print(datos[k][i]);
		  }
		  System.out.println();
	  }
	  
	  int[] v=new int[m];
	  for(int k=0;k<m;k++)
	  {
		  for(int j=0;j<n;j++)
		  {
			  for(int i=j+1;i<n;i++)
			  {
				  if(datos[k][j]>datos[k][i])
				     v[k]++;
			  }
		  }
	  }
	  
	  for(int k=0;k<m;k++)
	  {
		  int mayor=Integer.MIN_VALUE;
		  int pos;
		  for(int j=0;j<m;j++)
		  {
			  mayor=Math.max(mayor, v[j]);
		  }
		  pos=Arrays.binarySearch(v,mayor);
		  System.out.println(mayor);
		  System.out.println(pos);
		  v[pos]=-1;
		  for(int j=0;j<n;j++)
		  {
			  System.out.print((char)datos[pos][j]);
		  }
		  System.out.println();
	  }
	  
	}
}

