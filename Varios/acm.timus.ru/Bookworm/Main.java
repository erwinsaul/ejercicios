/*  Problem: Bookworm
 *  Site: acm.timus.ru
 *  Code: 1638
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		int book=in.nextInt();
		int tapa=in.nextInt();
		int vol1=in.nextInt();
		int vol2=in.nextInt(); 
		int d=(vol2*book)+(vol2-1)*(2*tapa);
		System.out.println(d);
		
	}
}
