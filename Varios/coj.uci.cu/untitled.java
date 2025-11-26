/*  Problem:Finding Kth Repetitions
 *  Code: 1835  
 *  Site: coj.uci.cu
 *  Status: Pending
 */
import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int k=in.nextInt();
		int q=in.nextInt();
		int vect[]=new int[n];
		for(int j=0;j<n;j++)
		{
			vect[j]=in.nextInt();			
		}
		for(int j=0;j<q;j++)
		{
		   int u=in.nextInt();
		   int v=in.nextInt();
		   int b[]=new int[1000];
		   int aux=0;
		   for(int i=(u-1);i<(v-1);i++)
		   {
			   b[vect[i]]++;
			   if(b[i]==k)
			   {
			      break;
			      aux=i+1;
			   }
		   }
		   if(aux==0)
		   {
			   System.out.println("NO");
		   }
		   else
		   {
			   System.out.println("YES "+aux);
		   }
		}
		
	}
}

