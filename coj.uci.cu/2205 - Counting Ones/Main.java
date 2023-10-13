/*   Problem: Counting Ones
 *   Code: 2205
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */

import java.util.*;

public class Main
{
	
	static int ones(int n)
	{
		int t=0,d;
		while(n>0)
		{
			d=n%2;
			t=t+d;
			n=n/2;
		}
		return t;
	}
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int[] v=new int[1001];
		for(int k=1;k<1001;k++)
		{
			v[k]=ones(k);
		}
		int t=in.nextInt();
		int a,b,r;
		for(int k=0;k<t;k++)
		{
			a=in.nextInt();
			b=in.nextInt();
			r=0;
			for(int j=a;j<=b;j++)
			{
				r+=v[j];
			}
			System.out.println(r);
		}
	}
}

