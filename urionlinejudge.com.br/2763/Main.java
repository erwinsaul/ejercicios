/*
Problem:2763
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();		
		String[] v = s.split("\\.");		
		System.out.println(v[0]);
		System.out.println(v[1]);		
		String[] v1 = v[2].split("-");
		System.out.println(v1[0]);
		System.out.println(v1[1]);
	}
}
