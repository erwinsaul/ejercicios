/*  Problem: Fibonacci, how many calls?
 *  Code: 1029
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Paradigms
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>

using namespace std;
int x;

int fib(int n)
{
	x++;
	if(n==0)return 0;
	if(n==1)return 1;
    return (fib(n-1)+fib(n-2));
}

int main(int argc, char **argv)
{
	int t,n;
	cin>>t;
	while(t--)
	{
		x=0;
		cin>>n;
		printf("fib(%d) = %d calls = %d\n",n,(x-1),fib(n));
	}
	return 0;
}

