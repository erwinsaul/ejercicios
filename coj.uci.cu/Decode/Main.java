/*    Problem: Decode
 *    Site: coj.uci.cu 
 *    Code: 1168 
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  
	  String clave=in.next();
	  int pos=in.nextInt();
	  String pal=in.next();
	  
	  char[] val=new char[26];
	  int j=pos-1;
	  
	  for(int k=0;k<clave.length();k++)
	  {
		  val[j]=clave.charAt(k);
		  j++;
		  if(j>25)
		     j=0;
      }
      
       j--; 
      
	  for(int k=0;k<26;k++)
	  {
		  if(clave.indexOf(Character.toString((char)(k+65)))==-1 )
		  {
		    
		    j++;
		    if(j>=26)
		     j=0;
		    val[j]=(char)(k+65); 
		   }	      		 
      }
   
      for(int k=0;k<pal.length();k++)
      {
		char car=pal.charAt(k);
		
		for(j=0;j<26;j++)
		{
		  if(car==val[j])
		  {
 		   System.out.print((char)(j+65)); 
 		   break;
 		  }
	     }
		
		 
	  }
      System.out.println();
	  
	}
}
