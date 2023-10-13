/*  Problem:  Doom's Day Algorithm
 *  Code: 12019
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
	  int n=in.nextInt();
	  int m,d;
	  for(int k=0;k<n;k++)
	  {
		  m=in.nextInt();
		  d=in.nextInt();
		  Calendar Cal = Calendar.getInstance();
          Cal.set(2011,m-1,d); //La hora no me interesa y recuerda que los meses van de 0 a 11
        
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

