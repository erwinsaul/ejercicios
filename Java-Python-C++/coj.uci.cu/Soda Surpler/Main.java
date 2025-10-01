/*
 *  Problem: Soda Surpler
 *  Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int n,e,f,c,total,vacios;
		n=in.nextInt();
		for(int k=0;k<n;k++)
		{
			e=in.nextInt();
			f=in.nextInt();
			c=in.nextInt();
			if(c==1)
			{
				System.out.println("0");
			}
			else
			{
			vacios=e+f;
			total=0;
			while(vacios>=c)
			{
				
				if(vacios%c==0)
				{
				   total+=vacios/c;
				   vacios=vacios/c;
   			    }
			    else
			    {
					total+=vacios/c;
					vacios=vacios%c+vacios/c;
				}
			}
			System.out.println(total);
		}
	}
	}
}

