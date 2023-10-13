import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();
		String[] v = s.split("W");
		boolean f = true;
		int r=0;
		for(int k=0;k<v.length;k++){
			if(v[k].length() > 0){				
				r++;
				f=false;
			}
		}
		if(f)
			System.out.println('0');
		else{
			System.out.println(r);
			for(int k=0;k<v.length;k++){
				if(v[k].length() > 0){
					System.out.print(v[k].length()+" ");
				}
			}
		}
	}
}

