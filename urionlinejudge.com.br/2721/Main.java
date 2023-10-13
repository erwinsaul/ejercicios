/*
Problem:2721
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		int s = 0;
		int a;		
		for(int i=0;i<9;i++){
			a = in.nextInt();
			s = s + a;
		}		
		int r = s % 9;
		if(r==0)
			r = 8;
		else
			r--;
		String[] v={"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
		System.out.println(v[r]);
	}
}
