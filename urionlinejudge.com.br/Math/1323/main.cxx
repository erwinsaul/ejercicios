/*  Problem: Feynman
 *  Code: 1323
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int solve(int n)
{
	int s=0;
	for(int k=1;k<=n;k++)
	   s=s+(k*k);
	return s;
}
int main(int argc, char **argv)
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		  break;
		printf("%d\n",solve(n));
		  
	}
	return 0;
}

