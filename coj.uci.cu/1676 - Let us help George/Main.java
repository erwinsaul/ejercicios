/*  Problem: Let us help George
 *  Code: 1676 
 *  Site: coj.uci.cu
 *  Status: Accepted(2)
 *  Type: Ad-Hoc
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		long n,r;
		int j=1;
		while(true)
		{
			r=0;
			n=in.nextInt();
			if(n==0) 
			   break;
			for(int k=1;k<=n;k++)
			{
				r=r+k*k;
			}
			System.out.println("Case "+j+":");
			System.out.println("n = "+n+", diamonds = "+r);
			j++;			
		}
	}
}

