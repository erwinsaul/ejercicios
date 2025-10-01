/*    Problem:Can Duplex Numbers be Perfect Squares?
 *    Site: coj.uci.cu
 *    Code: 1501
 */


import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
		long n=1, k=400;
		long num;
		for(k=1;k<100000000;k++)
		{
			String str=String.valueOf(k*k);
			String str1="",str2="";
			if(str.length()%2==0)
			{
				for(int i=0;i<str.length()/2;i++)
				{
					str1=str1+str.charAt(i);
					str2=str2+str.charAt(str.length()/2+i);
				}
				
				if(str1.compareTo(str2)==0)
				{
       			    System.out.println(k*k);
       			}
			}
	    }
	}
}
