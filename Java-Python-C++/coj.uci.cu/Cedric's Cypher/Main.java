/*   Problem: Cedric's Cypher
 *   Site: coj.uci.cu;
 */

import java.io.*;
import java.util.*;

public class Main
{

    static int indice(char car, int j)
    {
		int c=0, in=0;
	   if(car>='A'&&car<='Z')
	   {
	        c=car-'A'+1;
	      
	        if((c-j)<0)
	          in=(26+(c-j))+65;
	       else
	         in=(c-j)+65;
	   }
	   if(car>='a'&&car<='z')
	   { 
	        c=car-'a'+1;
	      
	      if((c-j)<0)
	          in=26+(c-j)+97;
	      else
	         in=(c-j)+97;
	   }
	 //  System.out.println(in);
	   return in;
	}
	
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		String cadena;
		while(true)
		{
			cadena=in.nextLine();
			if(cadena.charAt(0)=='#')
			     break;
			
			int tam=cadena.length();
			int paso=cadena.charAt(tam-1)-'A'+1;
			for(int k=0;k<tam-1;k++)
			{
				if((cadena.charAt(k)>='A'&& cadena.charAt(k)<='Z')||(cadena.charAt(k)>='a'&&cadena.charAt(k)<='z'))
				    System.out.print((char)indice(cadena.charAt(k),paso));
				else
				    System.out.print(cadena.charAt(k));    
			}
			System.out.println();
			
		}
		
	}
}
