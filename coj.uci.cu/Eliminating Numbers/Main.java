/*    Problem: Eliminating Numbers
 *    Site: coj.uci.cu
 *    Code: 1086
 */


import java.io.*;
import java.util.*;
import java.lang.*;

public class Main
{


    static in
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		Vector v=new Vector();
		int total,num;
		for(int k=0;k<10;k++)
		{
			total=0;
			int n=in.nextInt();
			for(int i=2;i<=n;i++)
			{
				v.add(i);
			}
			
			while(!v.isEmpty())
			{
				Object objeto = v.elementAt(0);
				int aux=Integer.parseInt(objeto.toString());
				v.remove(0);
				for(int j=0;j<v.size();j++)
				{
					objeto = v.elementAt(j);
					
					if((Integer.parseInt(objeto.toString())%aux)==0)
					    v.remove(j);
				}
					total++;
			}
			v.clear();
			System.out.println(total);
		}
		
	}
}
