/*   Problem: Powers of Two
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
      Scanner in=new Scanner(System.in);	   	
      int n=in.nextInt();
      BigInteger num= BigInteger.valueOf(1);
      BigInteger mul= BigInteger.valueOf(2);
      for(int k=0;k<n;k++)
      {
		  num=num.multiply(mul);
	  } 
      System.out.println(num);
      
	}
}

