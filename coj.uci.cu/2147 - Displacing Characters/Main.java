/*   Problem: Displacing Characters
 *   Code: 2147
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int t, n, tam,p;
	  String s;	
	  t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		s=in.next();
		n=in.nextInt();
		tam=s.length();
		char[] r=s.toCharArray();
		for(int i=0;i<tam;i++)
		{
			p=(i+n)%tam;
			r[p]=s.charAt(i);
		}		  
		System.out.println(r);
	  }
	  
	}
}

