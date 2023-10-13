/*   Problem: Taxi
 *   Site: acm.timus.ru
 *   Code: 1607
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  int a=in.nextInt();	
	  int b=in.nextInt();	
	  int c=in.nextInt();	
	  int d=in.nextInt();	
	  while(true)
	  {
		  if(a>=c)
		  {
		    System.out.println(a);
		    break;
		  }
		  if(a+b>c)
		  {
			System.out.println(c);
		    break;
		  }
		  a+=b;
		  c-=d;
	  }
	}
}
