/*   Problem: Alaska
 *   Code: 1439
 *   Site: coj.uci.cu
 *   Status: Pending
 */

import java.io.*;
import java.util.*;

public class Main
{
	for (i=0;i<1322;)
	{
         for (j=0;j < n && (s[j] <= i || s[j] > i+200); j++)
         {}
         if (j == n) break;
         i = s[j];
    }
	
	public static void main (String args[])
	{
	Scanner in=new Scanner(System.in);
	while(true)
	{
		int n=in.nextInt();
		if(n==0)
		   break;
		int k;
		int[] array=new int[n];
		for(k=0;k<n;k++)
		{
			array[k]=in.nextInt();
		}
		Arrays.sort(array);
		for(int a:array)
		   System.out.print(a+" ");
        boolean sw=true;
        k=0;
        int d=0;
        while(sw&&k<n)
        {
			
			if((array[k]-d)<=200)
			{
				sw=true;
				d=array[k];
				
			}
			else
			   sw=false;
			k++;
		}
		
		d=1422;
		k=n-1;
        while(sw&&k>=0)
        {
			if((d-array[k])<=200)
			{
				sw=true;
				d=array[k];
			}
			else
			   sw=false;
			k--;
		}
		
		if(sw)
		  System.out.println("POSSIBLE");
		else
		  System.out.println("IMPOSSIBLE");
	}	
	}
}

