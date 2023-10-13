/* Problem:  Light, more light
 * Code: 10110
 * Site: uva.onlinejudge.org
 * Status: Pending
 */  
     
import java.io.*;
import java.util.*;

public class Main{
	
	private static boolean isInteger(String str)
	 {
        try {
                int v = Integer.parseInt(str);
                System.out.println(v);
                return true;
        } catch(NumberFormatException e) {
			    System.out.println(str);
                return false;
        }
    }
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);	
	  while(true)
	  {
		  int n=in.nextInt();
		  
		  System.out.println(Float.toString((float)Math.sqrt(n)));
		  if(isInteger(Float.toString((float)Math.sqrt(n))))
		     System.out.println("yes");
		  else
		     System.out.println("no");
		     
	  }
	}
}

