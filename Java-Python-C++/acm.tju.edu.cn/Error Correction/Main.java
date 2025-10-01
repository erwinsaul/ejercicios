/*   Problem: Error Correction
 *   Code:1169
 *   Site: acm.tju.edu.cn
 *   Status: Wrong Answer
 */


import java.io.*;
import java.util.*;

public class Main
{
	public static void main (String args[])
	{
     Scanner in=new Scanner(System.in);
	 int n;
	 while(true)
	 {
		 n=in.nextInt();
		 if(n==0)
		    break;
		 int d;
		 int[] fil=new int[n+1];
		 int[] col=new int[n+1];
		 int cfil=0;
		 int ccol=0;
		 for(int k=0;k<n;k++)
		 {
			 for(int i=0;i<n;i++)
		     {
				d=in.nextInt();
				fil[k]+=d; 
				col[i]+=d;
		     }
		 }
		 
		 int fpos=0;
		 int cpos=0;
		 
		 for(int k=0;k<n;k++)
		 {
		   if(fil[k]%2!=0)
		   {
		       cfil++;
		       fpos=k+1;
		   }
		 }
		 
		 for(int k=0;k<n;k++)
		 {
		    if(col[k]%2!=0)
		    {
		       ccol++;
		       cpos=k+1;
		     }
		 }
		 if(cfil==0 && ccol==0)
		   System.out.println("OK");
		 else if(cfil==1 && ccol==1)
		   System.out.println("Change Bit ("+fpos+","+cpos+")");
		 else
		   System.out.println("Corrupt");
		 
	 }	
	}
}

