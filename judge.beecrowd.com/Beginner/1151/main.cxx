/*  Problem: Easy Fibonacci
 *  Code: 1151
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;

int fib(int n)
{
	int a=0,b=1,i,c;
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
	int n;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		printf("%d",fib(k+2));
		if(k+1<n)
		   printf(" ");
	}
	putchar(10);
	return 0;
}

