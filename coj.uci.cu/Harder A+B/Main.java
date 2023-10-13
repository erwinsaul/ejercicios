/*  Problem:Harder A+B
 *  Code: 1805  
 *  Site: coj.uci.cu
 *  Status: Accepted
 */
import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		long a=in.nextInt();
		long b=in.nextInt();
		long res=(a+b)+(a-b)+(b+a)+(b-a);
		System.out.println(res);
	}
}

