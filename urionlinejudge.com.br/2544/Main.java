import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		while(in.hasNext()){
			int n = in.nextInt();
			double r = Math.log10(n)/Math.log10(2);
			System.out.println((int)Math.floor(r));
		}
	}
}

