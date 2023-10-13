/*  Problem:Even Fibonacci numbers
 *  Code: problem 2
 *  Site: http://projecteuler.net/
 *  Status: Accepted
 *  Type: Math
 */	

import java.util.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  int[] v=new int[10000];
	  v[0]=0;
	  v[1]=1;
	  int suma=0;
	  int j=1;
	  do
	  {
		  j++;
		  v[j]=v[j-1]+v[j-2];
		  if(v[j]%2==0)
		    suma+=v[j];
		  System.out.println(v[j]);		  
	  }while(v[j]<4000000);
	  System.out.println(suma);
	}
}

