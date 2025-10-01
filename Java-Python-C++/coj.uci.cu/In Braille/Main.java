/*   Problem: In Braille
 *   Code: 1589
 *   Site: coj.uci.cu
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{
	static String num_braile(int n)
	{
		String s="";
		if(n==0)
		   s=".***..";
	    if(n==1)
		   s="*.....";
		if(n==2)
		   s="*.*...";
		   if(n==3)
		   s="**....";   
		   if(n==4)
		   s="**.*..";
		   if(n==5)
		   s="*..*..";
		   if(n==6)
		   s="***...";
		   if(n==7)
		   s="****..";
		   if(n==8)
		   s="*.**..";
		   if(n==9)
		   s=".**...";
		   
		 return s;
		   
	}
	
	static int braile_num(String s)
	{
		int n=0;
		if(s.compareTo(".***..")==0) //0
		  n=0;
	    if(s.compareTo("*.....")==0) //1
		  n=1;
		if(s.compareTo("*.*...")==0) //2
		   n=2;
		if(s.compareTo("**....")==0) //3
		   n=3;
		if(s.compareTo("**.*..")==0) //4
		   n=4;
		if(s.compareTo("*..*..")==0) //5
		   n=5;
		if(s.compareTo("***...")==0) //6
		  n=6;
		if(s.compareTo("****..")==0) //7
		   n=7;
		if(s.compareTo("*.**..")==0) //8
			n=8;
		if(s.compareTo(".**...")==0) //9
			n=9;
	  return n;
	}
	
      
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  while(true)
	  {
		  int n=in.nextInt();
			  
		  if(n==0)
		     break;
		  
		  String c=in.nextLine();
		  c=in.nextLine();
		  
		  if(c.compareTo("S")==0)
		  {
			  String s=in.nextLine();
			
			  String[] braile=new String[n];
			  for(int k=0;k<s.length();k++)
			  {
				braile[k]=num_braile(s.charAt(k)-48);
			  }
			  for(int j=0;j<3;j++)
			  {
			    for(int k=0;k<braile.length;k++)
			    {
				  String sub=braile[k].substring(0,2);
   		          braile[k]=braile[k].substring(2);
   		          System.out.print(sub);
   		          if(k<braile.length-1)
   		            System.out.print(" ");
			    }
			    System.out.println();
		      }
			  
		  }
		  
		  else
		  {
			  String s1=in.nextLine();
			  String s2=in.nextLine();
			  String s3=in.nextLine();
			  String[] sub1=s1.split(" ");
			  String[] sub2=s2.split(" ");
			  String[] sub3=s3.split(" ");
			  for(int k=0;k<n;k++)
			  {
				 String s=sub1[k]+sub2[k]+sub3[k];
				 System.out.print(braile_num(s));
			  }
			  
			  System.out.println();
		  }
	  }	
	}
}
