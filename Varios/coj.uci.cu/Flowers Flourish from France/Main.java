/*   
 *   Problem: Flowers Flourish from France
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	static boolean solve(String cad)
	{
		
		cad=cad.toLowerCase();
		String[] pal=cad.split(" ");
		int tam=pal.length;
		char car=pal[0].charAt(0);
		for(int k=1;k<tam;k++)
		{
			if(car!=pal[k].charAt(0))
			    return false;
		}
		return true;
	}
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		String cad;
		while(true)
		{
			cad=in.nextLine();
			if(cad.compareTo("*")==0)
			    break;
		    
		    if(solve(cad))
		        System.out.println("Y");
		    else
		        System.out.println("N");
		}
	}
}

