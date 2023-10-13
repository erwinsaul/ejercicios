import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n, k;
		n = in.nextInt();
		k = in.nextInt();
		int r = 240 - k;
		if(r<=0){
			System.out.println("0");
		}
		else{
			int s = 0;
			int t = 0;
			int sum = 0;
			for(int i=1;i<=n;i++){
				s = i*5;
				sum = sum + s;
				if(sum<=r){
					t++;
				}
			}
			System.out.println(t);
		}
	}
}

