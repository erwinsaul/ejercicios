/*  Problem: He's offside!
 *  Site: coj.uci.cu
 *  Code: 1630
 *  Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  while(true)
	  {
		  int a=in.nextInt();
		  int b=in.nextInt();
		  if(a==0&&b==0)
		      break;
		  int[] va=new int[a];
		  int[] vb=new int[b];
		  for(int k=0;k<a;k++)
		     va[k]=in.nextInt();
		  for(int k=0;k<b;k++)
		     vb[k]=in.nextInt();
		     
		  Arrays.sort(va);
		  Arrays.sort(vb);
		  if(vb[1]>va[0])
		     System.out.println("Y");
		  else
		        System.out.println("N");
	  }
	  	
	}
}
