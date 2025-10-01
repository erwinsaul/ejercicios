/*
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double res, restaxi;
	double r;
	scanf("%lf", &r);
	res=4*r*r*atan(1);
	restaxi=(2*r)*r;
	printf("%.4f\n", res);
	printf("%.4f\n", restaxi);
	return 0;
}

