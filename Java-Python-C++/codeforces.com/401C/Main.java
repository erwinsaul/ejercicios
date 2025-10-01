import java.io.*;
import java.util.*;
//Incompleto

public class Main{
	
	public static void main (String[] args) {
		Scanner in= new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int t;
		if((n-m)<=1 && (2*(n+1)>=m)){
			if(n==m){
				for(int i=0;i<(n+m);i++){
					if(n%2==0){
						System.out.println("1");
					}
					else{
						System.out.println("0");
					}
				}
			}
			else if((n-1)==m){
				for(int i=0;i<(n+m);i++){
					if(n%2==1){
						System.out.println("1");
					}
					else{
						System.out.println("0");
					}
				}
			}
			else
			{
				t = (n+m)/3;
				for(int i=0;i<t;i++){
					System.out.println("110");
				}
				n = n - t;
				m = m - t;
				
			}
		}
		else{
			System.out.println("-1");
		}
	}
}

