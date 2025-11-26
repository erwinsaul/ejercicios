import java.io.*;
import java.util.*;
public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		int n;
		while(in.hasNext()){
			s = in.next();
			n = in.nextInt();
			int t=0;
			int r = 0;
			for(int  i=0;i<s.length();i++){
				
				
				if(s.charAt(i)=='W'){
					t++;
					if(r>0)
						t++;
					r = 0;
				}
				else{
					r++;
					if(r==n){
						r = 0;
						t++;
					}
				}
				
			}
			if(r>0)
				t++;
			System.out.println(t);
		}
	}
}

