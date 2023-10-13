/*   Problem: Binaries Palindromes
 *   Site: coj.uci.cu
 *   Code: 1101
 *   Status: Accepted
 *   Type: String
 */


import java.io.*;
import java.util.*;
import java.lang.String;

public class Main
{

    static boolean solve(int n)
    {
      String cad=Integer.toBinaryString(n);
      int left=0;
      int rigth=cad.length()-1;
      while(left<rigth)
      {
      	if(cad.charAt(left)!=cad.charAt(rigth))
      	    return false;
      	left++;
      	rigth--;
	  }
      return true;
    	
    }
    	
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  boolean[] v=new boolean[200001];
	  for(int j=1;j<=200000;j++)
	     {
	     	if(solve(j))
	     	   v[j]=true;
	     	else
	     	   v[j]=false;
	     	   
	            
	     }
	  int n=in.nextInt();
	  for(int k=0;k<n;k++)
	  {
	     int a=in.nextInt();
	     int b=in.nextInt();
	     boolean ant=false;
	     for(int j=a;j<=b;j++)
	     {
	     	
	     	if(v[j])
	     	{
	     	  if(ant)
	     	  {
	     	     System.out.print(" ");
		      }
	     	  System.out.print(j);
	     	  ant=true;
	     	}
	     	
	     }
	     System.out.println();
	  }	
	}
}
