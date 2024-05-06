/*
Problem:2717
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n,a,b;
		n = in.nextInt();
		a = in.nextInt();
		b = in.nextInt();
		if(n>=(a+b)){
			System.out.println("Farei hoje!");
		}
		else{
			System.out.println("Deixa para amanha!");
		}
	}
}

