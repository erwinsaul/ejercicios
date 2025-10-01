/*  Problem: Collectable Cards
 *  Code: 1028
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */
 
#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdint.h>

using namespace std;

int gcd(int x, int y)
{
	return y ? gcd(y,x%y):abs(x);
}
int LCM(int a, int b)
{return (a*b)/gcd(a,b);}

int main(int argc, char **argv)
{
	int n,x,y;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		cout<<gcd(x,y)<<endl;
	}	
	return 0;
}

