/*   Problem: Modulo
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  int n,total=0;
	  Vector v=new Vector();
	  for(int k=0;k<10;k++)
	  {
		  n=in.nextInt();
		  if(!v.contains(n%42))
		  {
		     v.add(n%42);
		     total++;
		  }
	  }
	  System.out.println(total);
	}
}

