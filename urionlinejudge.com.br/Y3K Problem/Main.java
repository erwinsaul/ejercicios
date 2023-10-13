/*  Problem:  Y3K Problem
 *  Code: 893
 *  Site: uva.onlinejudge.org
 *  Type: Time / Ad-Hoc
 *  Status : Accepted
*/ 

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
		Scanner in=new Scanner(System.in);
		while(true)
		{
			int d=in.nextInt();
			int dia=in.nextInt();
			int mes=in.nextInt();
			int anho=in.nextInt();
			if(dia==0&&d==0&&mes==0&&anho==0)
			   break;
			Calendar cal=Calendar.getInstance();
			cal.set(anho,mes-1,dia);
			cal.add(Calendar.DATE, d);
			System.out.println(cal.get(Calendar.DATE)+" "+(cal.get(Calendar.MONTH)+1)+" "+cal.get(Calendar.YEAR));
		}
	}
}

