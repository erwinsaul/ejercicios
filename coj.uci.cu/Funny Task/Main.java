/*  Problem:Funny Task
 *  Code: 1839  
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
	 int t=in.nextInt();
	 for(int k=0;k<t;k++)
	 {
		 int n=in.nextInt();
		 n=(n+3)*2;
		 n=(n+3)*2;
		 n=(n+3)*2;
		 System.out.println(n);
	 }
	 
	}
}

