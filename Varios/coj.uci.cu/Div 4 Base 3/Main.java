/*
 *  Problem: Div 4 Base 3
 *  Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[]) 
	{
		Scanner in=new Scanner(System.in);
		int t, num, tam;
		String cad;
		t=in.nextInt();
		for(int k=0;k<t;k++)
		{
			cad=in.next();
			tam=cad.length();
			if(tam<3)
			{
				num=Integer.parseInt(cad);
				num=(num/10)*3+num%10;
				if(num%4==0)
				   System.out.println("YES");
				else
			       System.out.println("NO");
			}
			else
			{
				num=(cad.charAt(tam-2)-48)*3+(cad.charAt(tam-1)-48);
				if(num%4==0)
				   System.out.println("YES");
				else
			       System.out.println("NO");
				
			}
		}
	}
}
