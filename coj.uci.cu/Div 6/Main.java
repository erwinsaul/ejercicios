/*  
 *   Problem: Div 6
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static boolean muldos(String cad)
	{
		int tam=cad.length();
		if((cad.charAt(tam-1)-48)%2==0)
		      return true;
		
		return false;
	}
	
	static boolean multres(String cad)
	{
		int tam, suma=0;
		tam=cad.length();
		for(int k=0;k<tam;k++)
		{
			suma+=(cad.charAt(k)-48);
		}
		if(suma%3==0)
		   return true;
		
		return false;
	}
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);
	   String num;
	   int t;
	   t=in.nextInt();
	   for(int k=0;k<t;k++)
	   {
		   num=in.next();
		   if(muldos(num)&&multres(num))
		      System.out.println("YES");
		   else
		     System.out.println("NO");
	   }	
	}
}

