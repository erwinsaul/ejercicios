/*  Problem:Zeros and One
 *  Code: 10324
 *  Site: uva.onlinejudge.irg
 *  Type: Ad-Hoc / Cadenas
 *  Status: Pending
 */

import java.util.*;


public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int i,j,n, min, max,t=0;
	  while(in.hasNext())
	  {
		  t++;
		  String s=in.next();
		  n=in.nextInt();
		  System.out.println("Case "+t+":");
		  for(int k=0;k<n;k++)
		  {
			  i=in.nextInt();
			  j=in.nextInt();
			  min=Math.min(i,j);
			  max=Math.max(i,j);
			  String c=s.substring(min,max+1);
			  char[] array=c.toCharArray();
			  int tam=array.length;
			  Arrays.sort(array, 0,tam);
			  if(array[0]==array[tam-1])
			      System.out.println("YES");
			  else
			      System.out.println("NO");
		  }
	  }	
	}
}

