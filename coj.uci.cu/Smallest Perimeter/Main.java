/*    Problem: Smallest Perimeter
 *    Site: coj.uci.cu 
 * 
 */

import java.util.*;
import java.io.*;

public class Main
{

	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int per,a,b,c,suma;
		per=99999;
		for(int k=0;k<n;k++)
		{
			suma=0;
			a=in.nextInt();
			b=in.nextInt();
			c=in.nextInt();
			suma=a+b+c;
			if(suma<per)
			     per=suma;
		}
		System.out.println(per);
	}
}
