/*  Problem:Hamming Distance
 *  Code: 1808  
 *  Site: coj.uci.cu
 *  Status: Accepted
 */
 import java.io.*;
 import java.util.*;
public class Main{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  while(true)
	  {
		  String a=in.next();
		  if(a.charAt(0)=='X')
		    break;
		  String b=in.next();
		  int hamming=0;
		  for(int k=0;k<a.length();k++)
		  {
			  if(a.charAt(k)!=b.charAt(k))
			      hamming++;
		  }
		  System.out.println("Hamming distance is "+hamming+".");
      }
	}
}

