/*    Problem: Big Powers
 *    Code: 1600
 *    Site: coj.uci.cu
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	static boolean es_par(String cad)
	{
		BigInteger a=BigInteger.valueOf(2);
		BigInteger n=new BigInteger(cad);
		BigInteger z=BigInteger.ZERO;
		n=n.mod(a);
		if(n.compareTo(z)==0)
		   return true;
		return false;
		
	}
	
	static int modulo(String cad)
	{
		
		BigInteger a=BigInteger.valueOf(4);
		BigInteger n=new BigInteger(cad);
		n=n.mod(a);
		return n.intValue();
	}
	
	static int solve(String a, String b)
	{
		int aux=0;
		int n=a.charAt(a.length()-1)-48;
		int m=modulo(b);
		if (n==5) //Cuando termina en 5
		    aux=5;
		if(n==6) //Cuando termina en 6
	        aux=6; 
	   if(n==0)  //Cuando termina en 0
	        aux=0;
	   if(n==1)  // Cuando termina en 1
	        aux=1;           	
	   //Cuando Termina en 4
	   if(n==4&&es_par(b))     
	      aux=6;
       if(n==4&&!es_par(b)) 
	      aux=4;
	   
	   //Cuando termina en 9
	   if(n==9&&es_par(b))     
	      aux=1;
       if(n==9&&!es_par(b)) 
	      aux=9;
	   
	   //cuando termina en 2
	  if(n==2)
	  {
		switch(m)
		  {
			  case 1: aux=2;break;
			  case 2: aux=4;break;
			  case 3: aux=8;break;
			  case 0: aux=6;break;
		  }
	  }
	  
	  //Cuando el numero termina en 3
	  if(n==3)
	  {
		  switch(m)
		  {
			  case 1: aux=3;break;
			  case 2: aux=9;break;
			  case 3: aux=7;break;
			  case 0: aux=1;break;
		  }
	  }
	  
	  //cuando el numero termina en 7
	  if(n==7)
	  {
		 switch(m)
		  {
			  case 1: aux=7;break;
			  case 2: aux=9;break;
			  case 3: aux=3;break;
			  case 0: aux=1;break;
		  } 
	  }
	  
	  //cuando el numero termina en 8
	   if(n==8)
	   {
		   switch(m)
		  {
			  case 1: aux=8;break;
			  case 2: aux=4;break;
			  case 3: aux=2;break;
			  case 0: aux=6;break;
		  }
	   }
	      
	      	      
	   return aux;
	}

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  while(true)
	  {
		  String a=in.next();
		  String b=in.next();
		  if(a.compareTo("0")==0&&b.compareTo("0")==0)
		      break;
		  System.out.println(solve(a,b));
		      
	  }	
	}
}
