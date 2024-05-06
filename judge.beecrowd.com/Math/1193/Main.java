/*  Problem: Base Conversion
 *  Code: 1193
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Math - 2
 */

import java.util.*;
import java.math.*;
import java.io.*;

public class Main
{
	static String base(String num, int base1, int base2)
	{
		
		Integer numero = 0;
		try{
			numero = Integer.valueOf(num, base1);
		}catch (NumberFormatException e) {
			System.err.print("\nERROR : El numero " + num +" no es soportado en la base " + base1);
		}
		return Integer.toString(numero.intValue(), base2);
	}
	
	public static void main (String args[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());        		
		String s,c;
		for(int k=1;k<=n;k++)
		{
			System.out.println("Case :"+k);
			String[] input = br.readLine().split(" ");
			s=input[0];
			c=input[1];
			if(c.compareTo("bin")==0)
			{
				System.out.println(base(s,2,10)+" dec");
				System.out.println(base(s,2,16)+" hex");
			}
			if(c.compareTo("dec")==0)
			{
				System.out.println(base(s,10,16)+" hex");
				System.out.println(base(s,10,2)+" bin");				
			}
			if(c.compareTo("hex")==0)
			{
				System.out.println(base(s,16,10)+" dec");
				System.out.println(base(s,16,2)+" bin");
			}
			System.out.println();
		}
		
	}
  
}

