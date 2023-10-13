/*  Problem:  The Biggest Loser
 *  Code: 1564
 *  Site: coj.uci.cu
 *  Status: pending
 *  Type: Math
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);		
		String m,c,nombref="",nombrem="";
		double ant, actual;
		int n;		
		double maym,mayf,p;
		while(true)
		{
			n=in.nextInt();
			maym=-99999;
			mayf=-99999;
			if(n==0)
			  break;			
			for(int k=0;k<n;k++)
			{
				m=in.next();
			    c=in.next();
			    ant=in.nextDouble();
			    actual=in.nextDouble();
			    p=100.0-((actual*100.0)/ant);
			    if(c.compareTo("F")==0)
			    {
				
				  if(p>mayf)
				  {
					  mayf=p;
					  nombref=m;					  
				  }
				}
				else
				{
				  if(p>maym)
				  {
					  maym=p;
					  nombrem=m;					  
				  }
				}				
			}
			System.out.printf("%s %.2f %s %.2f ",nombrem,maym,nombref,mayf);		
		}
	}
}

