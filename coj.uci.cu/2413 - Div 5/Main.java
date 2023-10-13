/*   Problem:  Div 5
 *   Code: 2413
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

import java.io.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader in=new BufferedReader(isr);
		int t=Integer.parseInt(in.readLine());
		String s;
		for(int k=0;k<t;k++)
		{
			s=in.readLine();
			if(s.charAt(s.length()-1)=='5' || s.charAt(s.length()-1)=='0')
			   System.out.println("YES");
			else
			   System.out.println("NO");
		}
	}
}

