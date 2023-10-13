import java.io.*;
import java.util.*;
public class Main
{
	
	public static void main (String[] args)
	{
		Scanner in = new Scanner(System.in);
		int[] v = new int[10000];
		int n, a, b, r;
		n = in.nextInt();
		for(int k=0;k<n;k++)
		{
			a = in.nextInt();
			b = in.nextInt();
			
			for(int j=0;j<b;j++)
			{
				v[j] = in.nextInt();
				r = in.nextInt();
			}
			r=0;
			Arrays.sort(v, 0 , b);
			for(int j=b-1;j>=b-a;j--)
			{
				r = r + v[j];
			}
			System.out.println(r);
		}
		
		
	}
}

