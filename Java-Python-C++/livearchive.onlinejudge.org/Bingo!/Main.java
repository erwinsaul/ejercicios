/*
 *  Problem:Bingo!
 *  Code:4806
 *  Site:livearchive.onlinejudge.org
 *  Status: Wrong Answer
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
		int n=in.nextInt();
		int b=in.nextInt();
		if(n==0 && b==0)
		  break;
		int[] bolas=new int[b];
		int[] cas=new int[n+1];
		for(int k=0;k<n+1;k++)
		   cas[k]=-1;
		for(int k=0;k<b;k++)
		{
			bolas[k]=in.nextInt();
		}
		
		for(int k=0;k<b;k++)
		{
				for(int i=0;i<b;i++)
				{
					int sum=Math.abs(bolas[k]-bolas[i]);
					cas[sum]=sum;
				}
	
		}
	
	   int sol=1;
	    for(int k=0;k<n;k++)
		{
		     if( cas[k] == -1 )
	        {
	         sol = -1;
	         break;
	        }
	        else
	        sol = 1;
		}
	   if(sol==1)
	      System.out.println("Y");
	   else
	     System.out.println("N");
		  
	}
	}
}

