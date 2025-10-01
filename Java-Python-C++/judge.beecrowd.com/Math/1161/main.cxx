/*  Problem: Factorial Sum
 *  Code: 1161
 *  Site: www.urionlinejudge.com.br
 *  Status: Accpeted
 *  Type: Math
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdint.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,m;
	uint64_t f[21],sum;
		
	f[0]=1;
	for(int k=1;k<=20;k++)
	{
		f[k]=k*f[k-1];
	}	
	while(cin>>n>>m)
	{
		sum=f[n]+f[m];
		cout<<sum<<endl;
	}
	return 0;
}

