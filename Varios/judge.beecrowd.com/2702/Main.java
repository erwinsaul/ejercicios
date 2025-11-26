import java.io.*;
import java.util.*;

public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int a,b,c,d,e,f;
		a = in.nextInt();
		b = in.nextInt();
		c = in.nextInt();
		d = in.nextInt();
		e = in.nextInt();
		f = in.nextInt();
		a = a - d;
		b = b  - e;
		c = c - f;
		
		int r = 0;
		if(a<0)
			r = r + Math.abs(a);
			
		if(b<0)
			r = r + Math.abs(b);
			
		if(c<0)
			r = r + Math.abs(c);
		System.out.println(r);
	}
}

