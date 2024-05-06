/*
Problem:2547
 */
import java.io.IOException;
import java.util.*;
public class Main{
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n,a,b,r=0,d;
		while(in.hasNext()){
			r = 0;
			n = in.nextInt();
			a = in.nextInt();
			b = in.nextInt();
			for(int i=0;i<n;i++){
				d = in.nextInt();
				if(d>=a && d<=b){
					r++;
				}
			}
			System.out.println(r);
		}
	}
}

