/*    Problem: Playing with the Bases
 *    Code: 1604
 *    Site: coj.uci.cu
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.lang.*;
public class Main
{
	static int solve(String n)
	{
		int aux=2;
		for(int j=9;j>1;j--)
		{
			if(n.indexOf(Integer.toString(j))!=-1)
			{
				aux=j+1;
				break;
			}
		}
		
		int m=Integer.MAX_VALUE;
	    int[] menor={-1,-1,-1,-1,-1,-1,-1,-1,-1};
	    int resultado=0;
	    m=0;
	    for(int k=aux;k<=10;k++)
		{
		
			  try
			    {
        	     resultado=Integer.parseInt(n,k);
        	     menor[m]=resultado;
   
    	        }catch(NumberFormatException ex)
    	        {	
        	      resultado=-1;
        	      menor[m]=resultado;
    	        }
    	           	     m++;  
         }
		  
		Arrays.sort(menor);
		m=-1;
		for(int i:menor)
		{
		   if(i!=-1)
		   {
		     m=i;
		     break;
		   }
	    }
	    
	   return (int)m;
		
	}

	public static void main (String args[])
	{		
	  Scanner in=new Scanner (System.in);
	  int t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  String n=in.next();
		
		   System.out.println(solve(n));
	  }	
	}
}
