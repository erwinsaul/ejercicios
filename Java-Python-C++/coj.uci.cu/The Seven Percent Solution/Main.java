/*   Problem:  The Seven Percent Solution
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	static String solve(char car)
	{
		if(car=='!')
		   return "%21";
		if(car=='$')
		  return "%24";
		if(car=='%')
		  return "%25";
		if(car=='(')
		return "%28";
		if(car==')')
		return "%29";
		if(car=='*')
		return "%2a";
		if(car==' ')
		return "%20";
		
		return Character.toString(car);
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
		  for(int k=0;k<tam;k++)
		     System.out.print(solve(cadena.charAt(k)));    
		  System.out.println();
	  }
	}
}

