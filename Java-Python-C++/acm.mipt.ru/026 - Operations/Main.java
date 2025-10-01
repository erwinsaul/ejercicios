/*  Problem: Operations
 *  Code: 026
 *  Site: acm.mipt.ru
 *  Status: Pending
 *  Type: Ad-Hoc
 */	

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  int n=in.nextInt();
	  int j=0;
	  while(n!=0)
	  {
		  if(n%2==0)
		  {
			  n=n/2;
		  }
		  else if(n==1)
		     n=n-1;
		  else
		    n=n+1;  
         j++;
	  }
	  System.out.println(j);
	}
}

