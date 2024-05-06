/*  Problem: Fibonacci in Array
 *  Code: 1176
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;

unsigned long long fib(unsigned int n)
{
	unsigned long long a=0,b=1,i,c;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}

int main(int argc, char **argv)
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		printf("Fib(%d) = %lld\n",n,fib(n+2));
	}
	return 0;
}

