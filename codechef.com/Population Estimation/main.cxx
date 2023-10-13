/* Problem: Population Estimation
 * Code: TSX02
 * Site: codechef.com
 * Status: Pending
 * Type: Ad-Hoc
 */


#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int modexp(int a, int b, int n)
{
	long long res;
	if(b==0)
	  return 1;
	else
	{
		res=modexp(a,b/2,n);
		res=(res*res)%n;
		if(b%2==1)
		  res=(res*a)%n;
		return (int) res;
	}
}


int main(int argc, char **argv)
{
	int n,a,t, r;
	int m=1000000007;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&a);
		r=modexp(n,(int)pow(2,a-2000),m);
		printf("%d\n",r);
	}
	return 0;
}

