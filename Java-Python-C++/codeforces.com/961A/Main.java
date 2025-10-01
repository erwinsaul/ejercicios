import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int v[]= new int[1001];
		int n, m, d;
		n = in.nextInt();
		m = in.nextInt();
		for(int i = 0;i<m;i++){
			d = in.nextInt();
			v[d]++;
		}
		int menor = Integer.MAX_VALUE;
		for(int i=1;i<=n;i++){
			if(v[i]< menor){
				menor = v[i];
			}
		}
		System.out.println(menor);
	}
}

