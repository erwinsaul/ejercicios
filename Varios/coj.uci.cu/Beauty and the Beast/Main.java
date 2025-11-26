/*   Problem: Beauty and the Beast
 *   Code: 1616
 *   Site: coj.uci.cu
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[]) throws IOException
	{		
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
	   String t=br.readLine(); 
	  while(t!=null)
	  {
		  String[] v=t.split(":");
		  int a=Integer.parseInt(v[0]);
		  int b=Integer.parseInt(v[1]);
		  a=a>12?a-12:a;
		  float h=(float)(a*30+b*0.5);
		  float m=b*6;
		  h=h>=360?h-360:h; 
		  System.out.println(h+" "+m);
		  t=br.readLine(); 
	  }	
	}
}
