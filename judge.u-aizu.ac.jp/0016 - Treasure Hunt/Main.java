/* Problem: Treasure Hunt
 * Code: 0016
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Geometria
 */
 
 import java.util.*;


public class Main
{
	
	public static void main (String args[])
	{
	 Scanner in=new Scanner(System.in);
	 int d,t,r;
	 double dx,dy,x,y,a;
	 r=0;
	 x=0.0;
	 y=0.0;
	 while(true)
	 {
		 dx=0.0;
		 dy=0.0;
		 String s=in.next();
		 if(s.compareTo("0,0")==0)
		    break;
		 String[] c=s.split(",");
		 d=Integer.parseInt(c[0]);
		 t=Integer.parseInt(c[1]);
		 dx=d*Math.cos(Math.toRadians(r));
		 dy=d*Math.sin(Math.toRadians(r));
		 x += dx; y += dy;
         r = (r + t + 360) % 360;	
	 }	
	  System.out.println((int)y);
	  System.out.println((int)x);
	}
}

