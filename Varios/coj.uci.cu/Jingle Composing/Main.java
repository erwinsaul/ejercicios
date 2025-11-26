/*   Problem: Jingle Composing
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static float solve(String cad)
	{
		int tam=cad.length();
		float total=0;
		for(int k=0;k<tam;k++)
		{
			switch(cad.charAt(k))
			{
				case 'W':total+=(float)1; ;break;
				case 'H':total+=(float)1/2; ;break;
				case 'Q':total+=(float)1/4; ;break;
				case 'E':total+=(float)1/8; ;break;
				case 'S':total+=(float)1/16; ;break;
				case 'T':total+=(float)1/32; ;break;
				case 'X':total+=(float)1/64; ;break;
			}
		}
		return total;
	}
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		String cad;
		while(true)
		{
			cad=in.next();
			if(cad.charAt(0)=='*')
			     break;
			String[] pal=cad.split("/");     
			int tam=pal.length;
			int cant=0;
			for(int k=1;k<tam;k++)   
			{
				if(solve(pal[k])==1)
				   cant++;
			}
			System.out.println(cant);
		}
	}
}

