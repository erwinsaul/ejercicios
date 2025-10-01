/*
Problem:2582
 */
import java.io.IOException;
import java.util.*;
public class Main{	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int r=0;
		for(int i=0;i<t;i++){
				r=in.nextInt()+in.nextInt();
		switch(r){
			case 0:
				System.out.println("PROXYCITY");
			break;
			case 1:
				System.out.println("P.Y.N.G.");
			break;
			case 2:
				System.out.println("DNSUEY!");
			break;
			case 3:
				System.out.println("SERVERS");
			break;
			case 4:
				System.out.println("HOST!");
			break;
			case 5:
				System.out.println("CRIPTONIZE");
			break;
			case 6:
				System.out.println("OFFLINE DAY");
			break;
			case 7:
				System.out.println("SALT");
			break;
			case 8:
				System.out.println("ANSWER!");
			break;
			case 9:
				System.out.println("RAR?");
			break;
			default:
				System.out.println("WIFI ANTENNAS");
			break;
			
		   }
		}
		
	}
}

