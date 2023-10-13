/*  Problem: Array Fill III
 *  Code: 1178
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double n;
	double v[100];
	cin>>n;
	n=2.0*n;
	for(int k=0;k<100;k++)
	{
		v[k]=n/2.0;
		n=n/2.0;
	}
	for(int k=0;k<100;k++)
	{
		printf("N[%d] = %.4f\n",k,v[k]);
	}
	return 0;
}

