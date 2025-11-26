/*   Problem: Sqrt Log Sin
 *   Code: 1035
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int memo[1000001];

long int f(int n)
{
	if(memo[n]) 
	  return memo[n];
	else
	{
	  memo[n]=(f(n-sqrt(n))+f(log(n))+f( n*(1.0/2.0 - (1.0/2.0)*cos(2*n))))%1000000;
	 return memo[n];
	}
}

int main(int argc, char **argv)
{
	int n;
	memo[0]=1;
	while(1)
	{
		cin>>n;
		if(n<0)
		  break;
	   printf("%ld\n",f(n));
	}
	return 0;
}

