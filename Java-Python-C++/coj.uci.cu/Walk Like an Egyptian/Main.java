/*   Problem: Walk Like an Egyptian
 *   Site: coj.uci.cu
 *   Code: 1280
 */

import java.util.*;
import java.io.*;
public class Main{

    static int solve(int n)
    {
		return (n*n-n+1);
	}
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  while(true)
	  {
		int n=in.nextInt();
		if(n==0)
		    break;
		System.out.println(""+n+" => "+solve(n));  
	  }	
	}
}
