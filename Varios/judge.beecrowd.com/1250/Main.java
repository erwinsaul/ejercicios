import java.io.*;
import java.util.*;

public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		String s;
		
		int r;
		int n;
		int v[] = new int[50];
		for(int i = 0; i < t ; i++){
			r = 0;
			n = in.nextInt();
			
			for(int j=0;j<n;j++){
				v[j] = in.nextInt();
			}
			
			s = in.next();
			for(int j=0;j<n;j++){				
				if(v[j]<=2 && s.charAt(j)=='S'){
					r++;
				}
				
				if(v[j]>2 && s.charAt(j)=='J'){
					r++;
				}
			}
			System.out.println(r);
		}
	}
}

