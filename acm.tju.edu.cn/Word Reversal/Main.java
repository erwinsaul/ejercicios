/* Problem: Word Reversal
 * Code: 1153
 * Site: acm.tju.edu.cn
 * Status: Accepted
 */

import java.util.*;
import java.io.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[])
	{
	 Scanner in=new Scanner(System.in);
	 String line;
	 line=in.nextLine();
	 int n=Integer.parseInt(line);
	 for(int k=0;k<n;k++)
	 {
		 line=in.nextLine();
		 String[] cad=line.split(" ");
		 int tam=cad.length;
		 for(int i=0;i<tam;i++)
		 {
			 for(int j=cad[i].length()-1;j>=0;j--)
			    System.out.print(cad[i].charAt(j));
			    
			 if(i+1<tam)
			   System.out.print(" ");
		 }
		 System.out.println();
	 }
	}
}

