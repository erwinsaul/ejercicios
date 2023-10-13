import java.util.*;
import java.io.*;
import java.lang.*;

//WRONG ANSWER

public class Main{
	
	static int gcd(int x, int y)
	{
		return y==0 ? gcd(y, x % y) : Math.abs(x);
	}
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int f=0;
		int s;
		int s2;
		for(int k=2;k<n;k++){
			s = (k*(1+k))/2;
			s2 = 
			f = k;
			System.out.println(gcd(s,s+n));
			if(gcd(s,s+n) > 1)
			{
				break;
			}
		}
		if(f==0){
			System.out.println("No");
		}
		else{
			System.out.println("Yes");
			for(int i=1;i<=f;i++){
				System.out.print(i+" ");
			}
			System.out.println();
			for(int i=f;i>=1;i--){
				System.out.print(i+" ");
			}
			System.out.print(n+" ");
			System.out.println();
		}
	}
}

