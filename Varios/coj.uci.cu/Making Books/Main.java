/*    Problem:  Making Books
 *    Site: coj.uci.cu
 *    Code: 1615
 *    Status: Accepted
 */

import java.io.*;
import java.util.*;

public class Main
{

	public static void main (String args[])
	{		
	   Scanner in=new Scanner(System.in);
	      int j=1;
	   while(true)
	   {
		   int a=in.nextInt();
		   if(a==0&&!in.hasNext())
		       break;
		   int b=in.nextInt();
		   int may=a>b?a:b;		   		   
		   int men=a<b?a:b;
		   int[] v=new int[10];
		   for(int k=men;k<=may;k++)
		   {
			   int aux=k;
			   while(aux>0)
			   {
				   v[aux%10]++;
				   aux=aux/10;
			   }
		   }
		
		   System.out.print("Case "+j+":");
		   for(int k=0;k<10;k++)
		   {
			  System.out.print(" "+k+":"+v[k]); 
		   }
		   j++;
		   System.out.println();
	   }	
	}
}
