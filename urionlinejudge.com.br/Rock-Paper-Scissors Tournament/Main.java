/*  Problem: Rock-Paper-Scissors Tournament
 *  Code: 10903
 *  Site: uva.onlinejudge.org
 *  Type: Ad-Hoc / String
 *  Status: Accepted
 */

import java.util.*;
import java.io.*;
import java.lang.*;

public class Main
{
	
	public static void main (String args[]) throws IOException
	{
	 InputStreamReader isr=new	InputStreamReader(System.in);
	 BufferedReader in=new BufferedReader(isr);
	 int x=0;
	 for (StringTokenizer st;(st=new StringTokenizer(in.readLine()))!=null;x++)
	 {
	 //Scanner in=new Scanner(System.in);	
	 int n,k,J1,J2;
	 String mano1,mano2;
	 float porcentaje;
	  n=Integer.parseInt(st.nextToken());
	  if(n==0)
	     break;
	  if(x>0)
	    System.out.printf("\n");
	  int ganados[]=new int[n+1];
	  int perdidos[]=new int[n+1];
	  k=Integer.parseInt(st.nextToken());
	  
	  int t=(k*n*(n-1))/2;
	  for(int j=0;j<t;j++)
	  {
		st=new StringTokenizer(in.readLine());
        J1=Integer.parseInt(st.nextToken());
        mano1=st.nextToken();
	    J2=Integer.parseInt(st.nextToken());
	    mano2=st.nextToken();
	     if(mano1.equals("rock"))
	     {
                   if(mano2.equals("scissors")){ganados[J1]++;perdidos[J2]++;}
                   else if(mano2.equals("paper")){ganados[J2]++;perdidos[J1]++;}
          }
         else if(mano1.equals("scissors"))
         {
              if(mano2.equals("paper")){ganados[J1]++;perdidos[J2]++;}
              else if(mano2.equals("rock")){ganados[J2]++;perdidos[J1]++;}
         }
         else if(mano1.equals("paper"))
         {
             if(mano2.equals("rock")){ganados[J1]++;perdidos[J2]++;}
             else if(mano2.equals("scissors")){ganados[J2]++;perdidos[J1]++;}
         } 
	    
	  }
	  
	  for(int j=1;j<=n;j++)
	  {
		if((ganados[j]+perdidos[j])>0)
		{  
	    porcentaje=(float)ganados[j]/(float)(ganados[j]+perdidos[j]);
	    System.out.printf("%.3f\n",porcentaje);
	    }
	    else
	    System.out.println("-");
	  }
	  
     }
	}
}

