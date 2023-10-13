/*   Problem: 16417. Cola de Primos
 *   Site: bo.spoj.com
 *   Status: Pending
 *   type: Math
 */
 
import java.util.*;

public class Main{
	
	static int gcd(int x, int y)
	{
		return y > 0 ? gcd(y,x % y): Math.abs(x);
	}
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		String s;
		int n,a,b;
		while(true)
		{
			n=in.nextInt();
			if(n==0)
			   break;
			a=0;b=0;
			for(int k=0;k<n;k++)
			{
				s=in.next();
				String[] v=s.split("/");
				if(gcd(Integer.parseInt(v[0]), Integer.parseInt(v[1]))==1)
				  a++;
			}
			for(int k=0;k<n;k++)
			{
				s=in.next();
				String[] v=s.split("/");
				if(gcd(Integer.parseInt(v[0]), Integer.parseInt(v[1]))==1)
				  b++;
			}
			if(a==b)
			  System.out.println("=");
			else if(a>b)
			  System.out.println("Alice");
		    else
		      System.out.println("Bob");
		}
	}
}

