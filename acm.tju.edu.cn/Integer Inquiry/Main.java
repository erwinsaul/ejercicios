/*  Problem:Integer Inquiry
 *  Code: 1112   
 *  Site: acm.tju.edu.cn
 *  Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
	BigInteger n= new BigInteger("0");	
	BigInteger m= BigInteger.ZERO;
	BigInteger sum= new BigInteger("0");
	while(true)
	{
		n=in.nextBigInteger();
		if(n.compareTo(m)==0)
		   break;
		sum=sum.add(n);
		
	}
	System.out.println(sum);
    }
}

