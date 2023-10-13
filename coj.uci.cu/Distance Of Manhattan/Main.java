/*  Problem:Distance Of Manhattan
 *  Code: 1842  
 *  Site: coj.uci.cu
 *  Status: Accepted
 */


import java.util.*;
import java.io.*;


public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  int x1=in.nextInt();
		  int y1=in.nextInt();
		  int x2=in.nextInt();
		  int y2=in.nextInt();
		  System.out.println(Math.abs(x2-x1)+Math.abs(y2-y1));
	  }	
	}
}
