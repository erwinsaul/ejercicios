import java.io.*;
import java.util.*;
public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();
		char c;
		int[] v= new int[26];
		String s = in.next();
		for(int i=0;i<n;i++){
			c = s.charAt(i);
			int p = c-65;
			v[p]++;
		}
		int menor = 100001;
		for(int i=0;i<k;i++){
			if(v[i]<menor)
				menor = v[i];
		}
		
		System.out.println(menor*k);
	}
}

