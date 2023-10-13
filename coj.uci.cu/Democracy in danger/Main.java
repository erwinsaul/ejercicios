/*   Problem: Democracy in danger
 *   Site: coj.uci.cu
 *   Code: 1025
 */

import  java.util.*;
import java.io.*;
public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt();
	  int[] v=new int[n];
	  for(int k=0;k<n;k++)
	  {
		v[k]=in.nextInt();  
	  } 
	
		int votos=0;
		 Arrays.sort(v);
		
		  
	  for(int k=0;k<(n/2+1);k++)
	  {
		votos=votos+((v[k]/2)+1);
	  } 	  	
	  System.out.println(votos);
	}
}
