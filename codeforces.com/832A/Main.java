import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		long k = in.nextLong();
		if((n/k)%2!=0){
			System.out.println("YES");
		}
		else{
			System.out.println("NO");
		}
		
	}
}

