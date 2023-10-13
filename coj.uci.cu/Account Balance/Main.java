/*
 * Problem: Account Balance
 * Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int n,b,t,d;
		String c;
		n=in.nextInt();
		for(int k=0;k<n;k++)
		{
			b=in.nextInt();
			d=in.nextInt();
			for(int i=0;i<d;i++)
			{
				c=in.next();
				t=in.nextInt();
				if(c.compareTo("C")==0)
					 b=b+t;
				else
		    	     b=b-t;
			}
			System.out.println(b);
		}
	}
}

