/*
Problem:2787 
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		if(a%2==1 && b%2==1){
			System.out.println("1");
		}
		else if(a%2==0 && b%2==0){
			System.out.println("1");
		}
		else{
			System.out.println("0");
		}
			
	}
}
