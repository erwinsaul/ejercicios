/*   Problem: Giving Gifts
 *   Site: coj.uci.cu
 *   Code: 1775
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt();	
	  int aux;
	  int[] v=new int[n];
	  for(int k=0;k<n;k++)
	  {
		  aux=in.nextInt();
		  v[aux-1]=k+1;
	  }
	  for(int k=0;k<n;k++)
	  {
		 System.out.print(v[k]);
		 if(k+1<n)
		  System.out.print(" ");
	  }
	  
	  
	}
}
