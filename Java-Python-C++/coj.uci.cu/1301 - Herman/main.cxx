/*   Problem:1301 - Herman
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: Math
 */

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	double res, restaxi;
	double r,d,per,pi;
	scanf("%lf", &r);
	res=4*r*r*atan(1);
	d=(r*r)/sqrt(2);
	per=(4*d)/sqrt(2);
	pi=floor(per/d);	
	restaxi=pi*r*r;
	printf("%.4lf\n", res);
	printf("%.4lf\n", restaxi);
	return 0;
}

