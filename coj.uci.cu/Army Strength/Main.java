/*   Problem: Army Strength
 *   Site: coj.uci.cu
 *   Code: 1011
 */

import java.util.*;
import java.io.*;

public class Main{


	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);	
	  int t=in.nextInt();
	  for(int k=0; k<t;k++)
	  {
		  	  System.out.println();
		  int a=in.nextInt();
		  int b=in.nextInt();
          int[] g=new int[a];
		  for(int j=0;j<a;j++)
		  {
			  g[j]=in.nextInt();
		  }
		  
          int[] m=new int[b];
		  for(int j=0;j<b;j++)
		  {
			  m[j]=in.nextInt();
		  }
		  Arrays.sort(g);
		  Arrays.sort(m);
		  if(g[a-1]>=m[b-1])
		     System.out.println("Godzilla");
		  else
		     System.out.println("MechaGodzilla");
	  }
	}
}
