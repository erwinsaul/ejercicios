/*  Problem: TRI
 *  Code: 1551
 *  Site: coj.uci.cu
 *  Status: WA
 *  Type: Ad-Hoc
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int a,b,c;				
		int j=1;
		while(in.hasNext())
		{
			a=in.nextInt();
			b=in.nextInt();
			c=in.nextInt();			
			if((a+b)==c)
			{
				System.out.println("Case "+j+": "+a+"+"+b+"="+c);
			}
			else if((a-b)==c)
			{
				System.out.println("Case "+j+": "+a+"-"+b+"="+c);
			}
			else if((a*b)==c)
			{
				System.out.println("Case "+j+": "+a+"*"+b+"="+c);
			}
			else if((a/b)==c)
			{
				System.out.println("Case "+j+": "+a+"/"+b+"="+c);
			}
			else
			{
			  if(a==(b+c))
		    	{
				System.out.println("Case "+j+": "+a+"="+b+"+"+c);
			  }
			  else if(a==(b-c))
			  {
				System.out.println("Case "+j+": "+a+"="+b+"-"+c);
			  }
			  else if(a==(b*c))
			  {
				System.out.println("Case "+j+": "+a+"="+b+"*"+c);
			  }
			  else if(a==(b/c))
			  {
				System.out.println("Case "+j+": "+a+"="+b+"/"+c);
			  }	
			}
			j++;
			
		}
	}
}

