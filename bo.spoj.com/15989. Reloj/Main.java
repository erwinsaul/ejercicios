/*  Problem: 15989. Reloj
 *  Site: bo.spoj.com
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

import java.util.*;

public class Main{
	
	public static void main (String args[]) {
		Scanner in=new Scanner(System.in);		
		int h, m;
		while(in.hasNext())
		{
			h=in.nextInt();
			m=in.nextInt();
		    System.out.println((h%12)*30+" "+(m%60)*6);
		}
		
	}
}

