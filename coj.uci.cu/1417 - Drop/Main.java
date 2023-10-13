/*  Problem: Drop
 *  Code: 1417 - Drop
 *  Site: coj.uci.cu
 *  Status: pending
 *  Type: WA
 */

import java.io.*;
import java.text.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
		InputStreamReader isr= new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);		
		double n;
		int j;
		boolean flag=false;			
		while(true)
		{
			n=Double.parseDouble(in.readLine());			
			if(n==0.0)
			  break;
			if(flag)
			   System.out.println();
			j=1;
			flag=true;            
			System.out.printf("Starting height: %.5f meter(s)\n",n);
			while(n>=1.0/1000.0)
			{
				n=n/2.0;
				
				System.out.printf("Bounce #%d: %.10f meters\n",j,n);
				j++;
			}
		}
	}
}

