import java.io.*;
import java.util.*;


public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		int a=0,v;
		while(in.hasNext()){
			a= 0;
			n = in.nextInt();
			int r = (int)Math.ceil(n*(2.0/3.0));
			for(int i=0;i<n;i++){
				v = in.nextInt();
				if(v==1)
				{
					a++;
				}			
			}
			if(a>=r){
				System.out.println("impeachment");
			}
			else{
				System.out.println("acusacao arquivada");
			}
		}
		
	}
}

