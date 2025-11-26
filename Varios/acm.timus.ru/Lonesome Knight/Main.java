/*   Problem: Lonesome Knight
 *   Site: acm.timu.ru
 *   Code: 1197
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	  Scanner in=new Scanner (System.in);
	  int[][] v={{2,3,4,4,4,4,3,2},
	             {3,4,6,6,6,6,4,3},
	             {4,6,8,8,8,8,6,4},
	             {4,6,8,8,8,8,6,4},
	             {4,6,8,8,8,8,6,4},
	             {4,6,8,8,8,8,6,4},
	             {3,4,6,6,6,6,4,3},
	             {2,3,4,4,4,4,3,2}, 
		        };	
	  int n=in.nextInt();
	  for(int k=0;k<n;k++)
	  {
		  String c=in.next();
		  System.out.println(v[c.charAt(0)-'a'][c.charAt(1)-'1']);
	  }
	}
}
