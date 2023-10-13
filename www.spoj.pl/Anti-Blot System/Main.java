/*   Problem: Anti-Blot System
 *   Code:	ABSYS	
 *   Site: spoj.pl
 *   Status: Accepted
 */


import java.io.*;
import java.util.*;

public class Main
{
	static int res(int a, int b, String op )
	{
		int r=0;
		switch(op.charAt(0))
		{
			case '+': r=(a-b);break;
			case '-': r=(a+b);break;
			case '*': r=(a/b);break;
			case '/': r=(a*b);break;
		}
		return r;
	}
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String n1,n2,n3,op,igual;
	  String aux;
	  String s=new String("machula");
	  int a,b,c, r;
	  int t=in.nextInt();
	  aux=in.nextLine();
	  for(int k=0;k<t;k++)
	  {
		  n1=in.next();
		  op=in.next();
		  n2=in.next();
		  igual=in.next();
		  n3=in.next();
		  aux=in.nextLine();
		  a=0;
		  b=0;
		  c=0;
		  r=0;
		  if(n1.indexOf(s)>=0)
		  {
			  b=Integer.parseInt(n2);
			  c=Integer.parseInt(n3);
			  a=res(c,b,op);
		  }
		  else if(n2.indexOf(s)>=0)
		  {
			  a=Integer.parseInt(n1);
			  c=Integer.parseInt(n3);
			  b=res(c,a,op);
		  }
		  else 
		  {
			  a=Integer.parseInt(n1);
			  b=Integer.parseInt(n2);
			  switch(op.charAt(0))
		      {
			     case '+': r=(a+b);break;
			     case '-': r=(a-b);break;
			     case '*': r=(a*b);break;
			     case '/': r=(a/b);break;
		      }
		      c=r;
		  }
		  System.out.println(a+" "+op+" "+b+" "+igual+" "+c);
		  
	  }	
	}
}

