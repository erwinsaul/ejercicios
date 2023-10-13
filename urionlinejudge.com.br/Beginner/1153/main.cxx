/*  Problem: Simple Factorial
 *  Code: 1153
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int f(int n)
{
	int fact=1;
	for(int k=1;k<=n;k++)
	  fact=fact*k;
	return fact;
}
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	printf("%d\n",f(n));
	return 0;
}

