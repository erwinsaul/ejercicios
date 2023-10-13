/*  Problem: Exam Grader
 *  Site: coj.uci.cu
 */


import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	   Scanner in=new Scanner(System.in);	
	   int t, c;
	   double nota;
	   String sol,res;
	   t=in.nextInt();
	   sol=in.next();
	   c=in.nextInt();
	   for(int k=0;k<c;k++)
	   {
		   nota=0;
		   res=in.next();
		   for(int j=0;j<t;j++)
		   {
			   if(res.charAt(j)!='#')
			   {
				   if(res.charAt(j)==sol.charAt(j))
				      nota+=1;
				   else
				      nota-=0.25;
			   }
		   }
		   System.out.printf("%.2f",nota);
		   System.out.println();
	   }
	}
}

