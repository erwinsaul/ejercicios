/*  Problem:  Odd Number
 *  Code: 027
 *  Site: acm.mipt.ru
 *  Status: WA
 *  Type: Math
 */	

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);
		Scanner sc=new Scanner(System.in);
		int[] v=new int[1000001];
		int n=sc.nextInt();
		int d;
		int t=0;
		for(int k=0;k<n;k++) 
		{
			d=sc.nextInt();
			v[d]++;
			if(v[d]%2==1)
			{
				t=d;
			}
		}
		System.out.println(t);
	}
}

