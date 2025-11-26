import java.io.*;
import java.util.*;
public class Main {
	
	public static void main (String[] args) {
		Scanner in= new Scanner(System.in);
		int v[]= new int[6];
		for(int i=0;i<6;i++){
			v[i] = in.nextInt();
		}
		
		int r=0, s=0,a,b;
		boolean f=false;
		for(int i = 0 ; i<Math.pow(2,6);i++){
			String cad = Integer.toBinaryString(i);
			String t = "";
			for(int j=0;j<6-cad.length();j++){
				t  = t + "0";				
			}
			t = t + cad;
			cad = t;
			r = 0;
			s = 0;
			a = 0;
			b = 0;
			for(int j=0;j<cad.length();j++){				
				if( cad.charAt(j) == '1' ){
					r = r + v[j];
					a++;
				}
				else{
					s = s + v[j];
					b++;
				}
			}
			if(r==s && a == b){
				f = true;
			}						
		}
		if(f)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}

