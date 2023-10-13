/* Problem: Ones
 * Code: 10127
 * Site: uva.onlinejudge.org
 * Status: Time Limit Exced
 */ 

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main{
	
	public static void main (String args[]) throws IOException
	{
	  Scanner in=new Scanner (System.in);
	  String uno="1";
	  String cad="";
	  BigInteger zero=BigInteger.valueOf(0);
	  BigInteger r;
	  while(in.hasNext())
	  {
		  int a=in.nextInt();
		  if(a%2==0 || a%5==0)
		    System.out.println("0");
		  else
		  {
		   BigInteger m=BigInteger.valueOf(a);
		   do
		   {
			 cad=cad+uno;  
		     r=new BigInteger(cad);	  
		   }while(r.mod(m)!=zero);
		   System.out.println(cad.length());
	      }
	  }	
	}
}

