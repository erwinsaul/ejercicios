/*  Problem: Leap Year or Not Leap Year and …
 *  Code: 1279
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main{
	
	static boolean is_bisiesto(BigInteger n)
    {
		BigInteger cero=BigInteger.valueOf(0);
		BigInteger cuatro=BigInteger.valueOf(4);
		BigInteger cien=BigInteger.valueOf(100);
		BigInteger c=BigInteger.valueOf(400);
	 if ((n.mod(cuatro) == cero && n.mod(cien) != cero) || (n.mod(c) == cero))
	 {
       return true;
     }
     else
     {
       return false;
     }
    }
	
	public static void main (String args[]) throws IOException
	{
		Scanner in=new Scanner(System.in);
		BigInteger n;
		BigInteger quince=BigInteger.valueOf(15);
		BigInteger cinco=BigInteger.valueOf(55);
		BigInteger cero=BigInteger.valueOf(0);
	    boolean b,h,u;
	    boolean sw=false;
	    while(in.hasNext())	    
	   {
	     if(sw)
	       System.out.println();
	     sw=true;
	        
		n=in.nextBigInteger();
		b=false;
		h=false;
		u=false;
		if(is_bisiesto(n))
		{
		   b=true;			   
		   if(n.mod(cinco)==cero)
		      u=true;
		}
		if(n.mod(quince)==cero)
		   h=true;
        if(b)
          System.out.println("This is leap year.");
        if(h)
          System.out.println("This is huluculu festival year.");        
        if(u)
          System.out.println("This is bulukulu festival year.");  
        if(!b&&!h&&!u)  
           System.out.println("This is an ordinary year.");                
      
	  }
	}
}

