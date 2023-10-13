/*  Problem: Perfect Pth Powers
 *  site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
 	static int solve(int n)
	{
		int b=2,x=0;
		int aux=0;
		int B=46342;
		int DONE=100000;
   if(n>0)
   {
		for (b=2;b<B;b++)
		{
				long pow=1;
				for (int p=0;pow<=n;p++)
				 {
					if (n==pow)
					{
						aux=p;
						b=DONE; break;
					}
					pow*=b;
				}
			}
	}
	else
	{
		
			for (b=2;b<B;b++)
			 {
				long pow=1;
				for (int p=0;pow>=n;p++)
				 {
					if (n==pow)
					 {
						aux=p;
						b=DONE; break;
					}
					pow*=(-b);
				}
	          }	
	}
	if (b<DONE)
	   {
			aux=1;
		}
		
		return aux;	

	}
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int n;
		while(true)
		{
			n=in.nextInt();
			if(n==0)
			  break;
			System.out.println(solve(n));
		}
	}
}

