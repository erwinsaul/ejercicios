/* Problem: Twins
 * Code: 160 - A
 * Site: codeforces.com
 * Status: Accepted
 * */    

import java.io.*;
import java.util.*;

public class Main
{
	
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt();
	  int a,b,m;
	  int[] v=new int[n];
	  for(int k=0;k<n;k++)
	  {
		  v[k]=in.nextInt();
	  }	
	  Arrays.sort(v);
	  m=0;
	  do
	  {
		a=0;
		b=0;  
		m++;
		for(int k=0;k<(n-m);k++)
		{
			a+=v[k];
		}  
		
		for(int k=n-m;k<n;k++)
		{
			b+=v[k];
		}
		
	  }while(b<=a);
	  System.out.println(m);
	}
}

