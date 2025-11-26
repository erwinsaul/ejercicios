/*  Problem: Perfect Number
 *  Code: 1164
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int divisores(int n)
{
	int s=0;
	for(int k=1;k<n;k++)
	{
		if(n%k==0)
		  s=s+k;
	}
	return s;
}

int main(int argc, char **argv)
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(divisores(n)==n)
		  printf("%d eh perfeito\n",n);
	    else
	      printf("%d nao eh perfeito\n",n);
	}
	
	return 0;
}

