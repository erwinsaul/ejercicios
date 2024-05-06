/*  Problem: Hexagonal Tiles
 *  Code: 1393
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math
 */

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

unsigned long fib(int n)
{
	unsigned long a=1,b=1,c;
	for(int i=3;i<=n;i++)
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
	while(cin>>n && n)
	{
		cout<<fib(n+2)<<endl;
	}
	return 0;
}

