/*   Problem: Heptadecimal Numbers
 *   Site: coj.uci.cu
 *   Code: 1164
 */


import java.io.*;
import java.util.*;
import java.math.BigInteger;


public class Main
{

static int digit(char c)
{
	int n=0;
	switch (c)
	{
	  case '1':n=1;break;
	  case '2':n=2;break;
	  case '3':n=3;break;
	  case '4':n=4;break;
	  case '5':n=5;break;
	  case '6':n=6;break;
	  case '7':n=7;break;
	  case '8':n=8;break;
	  case '9':n=9;break;
	  case 'A':n=10;break;
	  case 'B':n=11;break;
	  case 'C':n=12;break;
	  case 'D':n=13;break;
	  case 'E':n=14;break;
	  case 'F':n=15;break;
	  case 'G':n=16;break;
	  case '0':n=0;break;
   }
   
   return n;
   }
   
   static long conv(String cad)
   {
   	 int tam=cad.length();
   	 long n=0;
   	 for(int k=0;k<tam;k++)
   	 {
   	   	n+=(digit(cad.charAt(k))*Math.pow(17,tam-k-1));
	 }
	 System.out.println(n);
   	return n;
   }
   static char solve(String c, String d)
   {
   	long a=conv(c);
   	long b=conv(d);
   	char res=' ';
   	if(a==b)
   	  res='=';
   	if(a<b)
   	  res='<';
   	if(a>b)
   	  res='>';
   	return res;
   }
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		while(true)
		{
			String c=in.next();
			String d=in.next();
			if(c.charAt(0)=='*' && d.charAt(0)=='*')
			    break;
			System.out.println(solve(c,d));
		}
	}
}
