/*   Problem: Joke
 *   Code: 1270
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: Ad-Hoc
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  double x,y;
	  int t;	
	  x=in.nextDouble();
	  y=in.nextDouble();
	  if(y>x)
	   t=0;
	  else
	  {  	
	    t=(int)(x/y);	    
      }
      System.out.println(t);
	}
}

