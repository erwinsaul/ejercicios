/*   Problem: The Hotel
 *   Site: coj.uci.cu
 *   Code:
 *   Site 2: acm.timus.ru
 *   Code 2: 1319
 */

import java.io.*;
import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		int[][] v=new int[100][100];
		int n=in.nextInt();
		int cont=1;
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<k;j++)
			{
				v[j][n-k+j]=cont;
				cont++;
			}
		}
		for(int j=0;j<n;j++)
			{
				v[j][j]=cont;
				cont++;
			}
		for(int k=0;k<n;k++)
		{
			int aux=0;
			for(int j=k+1;j<n;j++)
			{
				v[j][aux]=cont;
				cont++;
				aux++;
			}
		}
	   for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(""+v[k][j]+" ");
			}
			System.out.println();
		}
	}
}

