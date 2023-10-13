/*    Problem: Lost in Localization
 *    Site: acm.timu.ru
 *    Code: 1785
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		while(in.hasNext())
		{
		   int t=in.nextInt();
		   if(t>=1&&t<=4)
		       System.out.println("few");
		  if(t>=5&&t<=9)
		       System.out.println("several");
		       if(t>=10&&t<=19)
		       System.out.println("pack");
		       if(t>=20&&t<=49)
		       System.out.println("lots");
		       if(t>=50&&t<=99)
		       System.out.println("horde");
		       if(t>=100&&t<=249)
		       System.out.println("throng");
		       if(t>=250&&t<=499)
		       System.out.println("swarm");
		       if(t>=500&&t<=999)
		       System.out.println("zounds");
		       if(t>=1000)
		       System.out.println("legion");
		       
		       
	    }
	}
}
