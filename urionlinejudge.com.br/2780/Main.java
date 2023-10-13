/*
Problem:2780 
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		if(n<=800)
			System.out.println("1");
		else if(n<=1400)
			System.out.println("2");
		else
			System.out.println("3");
		
	}
}

