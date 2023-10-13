/*
Problem:2764
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		String[] v = s.split("/");
		String a = v[0];		
		String b = v[1];		
		String c = v[2];
		System.out.printf("%s/%s/%s\n",b,a,c);
		System.out.printf("%s/%s/%s\n",c,b,a);
		System.out.printf("%s-%s-%s\n",a,b,c);
	}
}
