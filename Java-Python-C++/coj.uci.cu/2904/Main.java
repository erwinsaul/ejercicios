import java.io.*;
import java.util.*;
import java.math.*;
public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		BigInteger s = new BigInteger("0");
		String n;
		BigInteger num;
		for(int k=0;k<t;k++)
		{
			n = in.next();
			num = new BigInteger(n);
			s = s.add(num);
		}
		System.out.println(s);
	}
}

