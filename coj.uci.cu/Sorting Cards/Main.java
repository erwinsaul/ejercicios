/*    Problem: Sorting Cards
 *    Site: coj.uci.cu 
 *    Code: 1507
 *    Status: Accepted
 */	

import java.io.*;
import java.util.*;

public class Main
{

   static int valor(char c)
   {
	   int n=0;
	   if(c=='A')
	       n=1;
	  else if(c=='T')
	       n=10;     
	  else if(c=='J')
	       n=11;
	  else if(c=='Q')
	       n=12;
	  else if(c=='K')
	       n=13;
	  else
	       n=c-48;
	       
	 return n;
   }
   
    static int suit(char c)
   {
	  int n=0;
	  if(c=='S')
	       n=1;
	  if(c=='H')
	       n=2;     
	  if(c=='C')
	       n=3;
	  if(c=='D')
	       n=4;
	        
	 return n;
   }
   
   public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  
	  for(int k=0;k<t;k++)
	  {
		  String[][] cad=new String[13][4];
		  
		  int d=in.nextInt();
		  for(int j=0;j<d;j++)
		  {
			   String c=in.next();
			   cad[valor(c.charAt(0))-1][suit(c.charAt(1))-1]=c;
		  }
		  
		  String aux="";
		  for(int j=0;j<13;j++)
		  {
			  
			  for(int m=0;m<4;m++)
			  {
				  if(cad[j][m]!=null)
				  {
				    aux=aux+" "+cad[j][m];
				  }
		      }
		     
	      }
		  for(int x=1;x<aux.length();x++)
		       System.out.print(aux.charAt(x));
		  System.out.println();
		    
	  }	
	}
}
