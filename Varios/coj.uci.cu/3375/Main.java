import java.io.*;
import java.util.*;
public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		String a, b;
		int r=0;		
		for(int k=0;k<t;k++)
		{
			a = in.next();
			b = in.next();
			r = 0;
			for(int j=0;j<a.length();j++)
			{
				if(a.charAt(j)!=b.charAt(j))
					r++;
			}
			System.out.println(r);
		}
	}
}

