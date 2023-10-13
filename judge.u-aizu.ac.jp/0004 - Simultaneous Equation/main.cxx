/* Problem: Simultaneous Equation
 * Code: 0004
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */


#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, char **argv)
{
	double a,b,c,d,e,f;
	double x,y, den;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		den=a*e-b*d;
		x=(c*e-b*f)/den;
		y=(a*f-d*c)/den;
		if(x==-0.00)
		    x=0.00;
		if(y==-0.00)
		    y=0.00;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}

