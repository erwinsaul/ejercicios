/*   Problem: Vasha Poetry
 *   Site: coj.uci.cu
 *   Code: 1468
 */


import java.io.*;
import java.util.*;

public class Main
{

    static int solve(String cad)
    {
		int sol=0;
		int tam=cad.length();
		for(int k=0;k<tam;k++)
		{
			switch (cad.charAt(k))
			{
				case 'a':case 'e':case 'i':case 'o':case 'u': sol++;break;
			}
		}
		return sol;
    }	
		
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		String a,b,c;
		
		String d=in.nextLine();
		int t=Integer.parseInt(d);
		for(int k=0;k<t;k++)
		{
		
		    a=in.nextLine();	
		    b=in.nextLine();
		    c=in.nextLine();
		    if(solve(a)==5 && solve(b)==7 && solve(c)==5)
		       System.out.println("YES");
		    else
		       System.out.println("NO");
		}
	}
}
