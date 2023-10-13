/*   Problem: Divorce of the Seven Dwarfs
 *   Site: acm.timus.ru
 *   Code: 1243
 *   Status: Accepted
 */

import java.io.*;
import java.util.*;
import  java.math.BigInteger;

public class Main{

	public static void main (String args[])
	{		
	  Scanner in= new Scanner(System.in);
	  BigInteger n=in.nextBigInteger();	
	  BigInteger d= BigInteger.valueOf(7);
	  System.out.println(n.mod(d));
	}
}
