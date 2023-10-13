/* Problem: To Carry or not to Carry  
 * Code: 10469
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */ 

import java.util.*;
import java.io.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int a,b;	
	  while(in.hasNext())
	  {
		  a=in.nextInt();
		  b=in.nextInt();
		  String cad1=Integer.toBinaryString(a);
		  String cad2=Integer.toBinaryString(b);
		  while(cad1.length()<32)
		  {
			  cad1="0"+cad1;
		  }
		  while(cad2.length()<32)
		  {
			  cad2="0"+cad2;
		  }
		  int[] v=new int[32];
		  int aux;
		  for(int k=31;k>=0;k--)
		  {
			   
			aux=(cad1.charAt(k)-48)+(cad2.charAt(k)-48);
			if(aux>1)
			 v[k]=0;
			else
			 v[k]=aux; 
		  }
		  aux=0;
          for(int k=0;k<32;k++)
          {
			  aux=aux+(int)(Math.pow(2,32-k-1)*v[k]);
		  }
		  System.out.println(aux);
		  
	  }
	}
}

