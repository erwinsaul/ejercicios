/*  Problem: TRI
 *  Code: 1185 - The Product of Digits
 *  Site: coj.uci.cu
 *  Status: TLE
 *  Type: Ad-Hoc
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  long n=in.nextLong();
	  String r="";
	  if(n==0)
	    System.out.println("10");
	  if(n==1)
	    System.out.println("1");
	  else
	  {
	     for(int k=9;k>=2;k--)
	     {
			 while(n%k==0)
			 {
				 r=k+r;
				 n=n/k;
			 }
	     }
      }
      if(n>1)
         System.out.println("-1");
      else
         System.out.println(r);
	}
}

