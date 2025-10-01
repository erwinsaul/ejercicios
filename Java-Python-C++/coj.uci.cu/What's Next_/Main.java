/*   Problem: What's Next?
 *   Site: coj.uci.cu
 *   Code: 1445
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		int a,b,c,d=0;
		while(true)
		{
			a=in.nextInt();
			b=in.nextInt();
			c=in.nextInt();
			if(a==c&&b==0&c==0)
			  break;
			
			d=b-a;
			if((b+d)==c)
			   System.out.println("AP "+(c+d));
			else
			{
				d=b/a;
			   System.out.println("GP "+(c*d));
			}
		}
	}
}
