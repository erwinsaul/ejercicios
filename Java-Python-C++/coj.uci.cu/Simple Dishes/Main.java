/*   Problem: Simple Dishes
 *   Site: coj.uci.cu
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
      Scanner in=new Scanner(System.in);
      int t,peso,j;
      Vector total=new Vector();
      t=in.nextInt();
      int[] v={14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
      for(int k=0;k<t;k++)
      {
		  peso=in.nextInt();
		  j=14;
		  while(j>=0)
		  {
			  if(peso>=(int)Math.pow(2,j))
			  {
				if(!total.contains(j))
				     total.add(j);
				peso=peso%(int)Math.pow(2,j);
			  }
			  else
			  {
				  j--;
			  }
	    }
		Collections.sort(total);
		Iterator itr=total.iterator();
		while (itr.hasNext())
		{
		   Object e=itr.next();	
         System.out.print(""+e+" ");
        }
        System.out.println();  
        total.clear();
	  }  		
	}
}

