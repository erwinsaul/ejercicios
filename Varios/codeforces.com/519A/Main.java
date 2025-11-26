import java.io.*;
import java.util.*;
public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		double l = in.nextInt();
		double p = in.nextInt();
		double q = in.nextInt();
		double  t = l/(p+q);
		double respuesta = t * p;
		System.out.println(respuesta); 
	}
}

