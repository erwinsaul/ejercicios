/*   Problem: Pole Position
 *   Site: coj.uci.cu
 *   Code: 1283
 *   Status: Accepted
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
	  	int t=in.nextInt();
	  	boolean flag=true;
	  	if(t==0)
	  	    break;
	  	int[] v=new int[t];
	  	int[] p=new int[t];
	  	for(int k=0;k<t;k++)
	  	{
	  		int aux=in.nextInt();
	  		p[k]=in.nextInt();
	  		p[k]=k+p[k];
	  		
	  		if(p[k]>=0&&p[k]<t)
	  		{
	  		   if(v[p[k]]==0)	
	  			v[p[k]]=aux;
	  		   else
	  		     flag=false;
	  			
			}
			else
			   flag=false;
	  	}
	  	if(flag)
	  	{
	     for(int k=0;k<t;k++)
	  	 {
	  	   System.out.print(v[k]);
	  	   if((k+1)<t)
	  	    System.out.print(" ");
	  	 }
	  	 System.out.println();
	    }
	    else
	    {
	    	System.out.println("-1");
		}
		
	  }	
	}
}
