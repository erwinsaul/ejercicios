/* Problem: What day is today?
 * Code: 0027
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Tiempo / Calendario
 */

import java.util.*;


public class Main{
	
	public static void main (String args[])
	{		
		Scanner in=new Scanner(System.in);
		int m,d;
		while(true)
		{
			m=in.nextInt();
			d=in.nextInt();
			if(d==0&&m==0)
			   break;
			Calendar Cal = Calendar.getInstance();
            Cal.set(2004,m-1,d); //La hora no me interesa y recuerda que los meses van de 0 a 11
        
          int dia = Cal.get(Calendar.DAY_OF_WEEK);
          switch (dia)
          {
			  case 1:System.out.println("Sunday");break;
			  case 2:System.out.println("Monday");break;
			  case 3:System.out.println("Tuesday");break;
			  case 4:System.out.println("Wednesday");break;
			  case 5:System.out.println("Thursday");break;
			  case 6:System.out.println("Friday");break;
			  case 7:System.out.println("Saturday");break;
	      }
		}
	}
}

