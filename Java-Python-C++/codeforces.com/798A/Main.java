import java.io.*;
import java.util.*;

public class Main {
	
	static boolean palindrome(String s){
		int ini=0;
		int fin = s.length()-1;
		int t=0;
		while(ini<fin){
			if(s.charAt(ini)!=s.charAt(fin)){
				t++;
			}
			ini++;
			fin--;
		}
		return t==1 || (t==0 && s.length()%2==1);
	}
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		if(palindrome(s)){
			System.out.println("YES");
		}
		else{
			System.out.println("NO");
		}
	}
}

