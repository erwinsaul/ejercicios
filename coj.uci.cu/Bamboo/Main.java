/*   Problem: Bamboo
 *   Site:coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);
	   int t=in.nextInt();
	   float suma=0,h,d;
	   for(int k=0;k<t;k++)
	   {
		   h=in.nextFloat();
		   d=in.nextFloat();
		   double x=(double)(h*h-d*d)/(2*h);
		   suma+=x;
		   System.out.printf("%.1f",x);
		   System.out.println();
      }	
      System.out.printf("%.1f",(float)suma/t);
	}
}

