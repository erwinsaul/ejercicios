/* Problem: Analysis & Deftness (A&D)
 * Code: 1875
 * Site: coj.uci.cu
 * Type: Ad-hoc / Geometria
 * Status: Accepted
 */


#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int t,n;
	double resultado;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d",&n);
		resultado=(3.0/2.0)*n*n*sqrt(3);
		printf("%.2f\n",resultado);
	}
	return 0;
}

