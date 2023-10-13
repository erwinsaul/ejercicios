/* Problem: Meeting
 * Code: 1898
 * Site: coj.uci.cu
 * Type: Ad-hoc / Math
 * Status: Accepted
 */



#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,a,b,d;
	double resultado;
    cin>>n;
    while(n--)
    {
		cin>>a>>b>>d;
		resultado=(float)d/(float)(a+b);
		printf("%.4f\n",resultado);
	}	
	return 0;
}

