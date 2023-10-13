/*    Problem: SMS Autocompletion
 *    Site: coj.uci.cu
 *    Code: 1632
 *    Status: WA
 */

import java.io.*;
import java.util.*;

public class Main
{

    static int solve(String cad)
    {
	    int aux=0;
	    int n=0;
		for(int k=0;k<5;k++)
		{
			if(cad.charAt(k)<='c')
			  n=1;
		    else if(cad.charAt(k)<='f')
			  n=2;
		    else if(cad.charAt(k)<='i')
			  n=3;
			else if(cad.charAt(k)<='l')
			  n=4;
			else if(cad.charAt(k)<='o')
			  n=5;
			else if(cad.charAt(k)<='r')
			  n=6;
			else if(cad.charAt(k)<='u')
			  n=7;
			else if(cad.charAt(k)<='x')
			  n=8;
			else if(cad.charAt(k)<='z')
			  n=9;
			aux=(aux*10)+n;  	  
		}
		
		return aux;	
	}
	public static void main (String args[])
	{		
	   Scanner in=new Scanner (System.in);
	   Vector<String> frase=new Vector();
	   Vector<String> dic=new Vector();
	   while(true)
	   {
		   String a=in.next();	
		   if(a.compareTo("-----")==0)
		       break;
		   frase.add(a);
       }
	   int j=0;
	   
	    while(in.hasNext())
	   {
		   String letra=in.next();
		   dic.add(letra);
	   }
  	   	 
	   System.out.println("-----");
	   for(String s:frase)
	   {
		  int aux=solve(s);
		   for(int k=0;k<dic.size();k++)
		   {
			   int a=solve(dic.get(k));
			   if(aux==a)
			   {
			      System.out.println(dic.get(k));
			    }  
		   }  
	      System.out.println("-----");
	   }  
	   
	  
	}
}
