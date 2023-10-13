/* Problem: A+B Coming
 * Code: 3
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc - Math
 */

import java.util.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		while(in.hasNext())
		{
			String a=in.next();
			String b=in.next();
			int n=Integer.parseInt(a,16);
			int m=Integer.parseInt(b,16);
			System.out.println((n+m));
		}
	}
}

