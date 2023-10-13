/*   Problem:  Find the Wedding Cake Volume
 *   Code: 2415
 *   Site: coj.uci.cu
 *   Status: WA
 *   type: Geometria
 */


import java.util.*;
import java.math.*;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;

public class Main
{
	
	public static void main (String args[])
	{
		DecimalFormatSymbols simbolos = new DecimalFormatSymbols();
        simbolos.setDecimalSeparator('.');
        DecimalFormat formateador = new DecimalFormat("####.##",simbolos);
		Scanner in=new Scanner(System.in);
		double pi=Math.acos(-1);
		double v;
		int r,a;
		int t=in.nextInt();
		int n;
		for(int k=0;k<t;k++)
		{
			n=in.nextInt();
			v=0;
			for(int i=0;i<n;i++)
			{
				r=in.nextInt();
				a=in.nextInt();
				v=v+pi*r*r*a;
			}
            System.out.println(formateador.format(v));
		}
	}
}

