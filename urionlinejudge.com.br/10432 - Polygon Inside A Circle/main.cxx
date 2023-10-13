/* Problem: Polygon Inside A Circle
 * Code: 10432
 * Site: uva.onlinejudge.org
 * Type: Geometria
 * Status: Accepted
 */

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	double r;
	double pi= 2*acos(0.0);
	double area;
	while(cin>>r>>n)
	{
		area=(r*r*sin((2.00*pi)/(float)n))/2.00;
		area=n*area;
		printf("%.3f\n",area);
	}
	return 0;
}

