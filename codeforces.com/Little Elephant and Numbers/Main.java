/*
 *      Main.java
 *      
 *      Copyright 2012 Unknown <erwin@darkstar>
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 *      
 *      
 */

import java.util.*;
public class Main
{
	static boolean existe(String c, String s )
	{
		for(int k=0;k<(int)c.length();k++)
		{
			if(s.indexOf(c.charAt(k))>=0)
			   return true;
		}
		return false;
	}
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  String s=in.next();
	  int n=Integer.parseInt(s);
	  int t=((int)s.length()*2)-1;
	  int d=0, r=0;
	  for(int k=1;k<=n;k++)
	  {
		  String c=Integer.toString(k);
		  if(existe(c,s))
		  {
			  if(n%k==0)
			     r++;
		  }
	  }
	  /*for(int j=1;j<=t;j++)
	  {
		  String c=Integer.toBinaryString(j);
		  while(c.length()<s.length())
		  {
			  c="0"+c;
		  }
		  d=0;  
		  for(int k=0;k<(int)c.length();k++)
		  {
			  
			  if(c.charAt(k)=='1')
			  {
			    d=d*10+(s.charAt(k)-48);
			  }  
			  
		  }
		  
		  
		  if(d>0 && n%d==0)
			   r++; 
	  }*/
	  System.out.println(r);	
	}
}

