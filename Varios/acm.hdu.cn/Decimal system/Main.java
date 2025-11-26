/* Problem: Decimal system
 * Code: 18
 * Site: acm.hdu.edu.cn
 * Status: Pending
 * Type: Ad-Hoc - Math / String
 */

import java.util.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int n,sum,b, aux;
		String c,num;
		while(in.hasNext())
		{
			sum=0;
			n=in.nextInt();
			for(int k=0;k<n;k++)
			{
			  c=in.next();
			  aux=c.indexOf("(");
			  num=c.substring(0,aux);
			  c=c.substring(aux);
			  aux=c.length();
			  c=c.substring(1,(aux-1));
			  b=Integer.parseInt(c);
			  aux=Integer.parseInt(num,b);
			  sum=sum+aux;
		    }
		    System.out.println(sum);
		}
	}
}

