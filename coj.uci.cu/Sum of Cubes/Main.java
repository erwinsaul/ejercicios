/*   Problem: Sum of Cubes
 *   Site: coj.uci.cu
 *   Code: 1382
 */


import java.io.*;
import java.util.*;

public class Main{

	public static void main (String args[]) 
    {		
		Scanner in= new Scanner(System.in);
		int t=in.nextInt();
		for(int k=0;k<t;k++)
		{
			long a=in.nextInt();
			long b=in.nextLong();
			long n=(long)Math.cbrt(a);
			long m=(long)Math.cbrt(b);
			System.out.println("n "+n+ " m "+m);
			if(a==b)
			{
			  double d = Math.cbrt(a);
              if (Math.floor(Math.cbrt(a))==d) 
                System.out.println(a%1000007);
              else
               System.out.println("0");
			}  
			else
			{
			 if(a==1)
			 {
				 m=(m*(m+1))/2;
				 m=m*m;
				 System.out.println(m);
				 System.out.println(m%1000007);
			 }
			 else
			 {
				 
			  n=(n*(n+1))/2;
			  n=n*n;
			  m=(m*(m+1))/2;
			  m=m*m;
			  System.out.println("n "+n+ " m "+m);
			  System.out.println((m-n)%1000007);
		     }
		    }
		}
	}
}
