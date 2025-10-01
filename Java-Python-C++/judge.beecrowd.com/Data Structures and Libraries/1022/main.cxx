/*  Problem: TDA Rational
 *  Code: 1022
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries
 */


#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int gcd(int x,int y)
{
	return y? gcd(y, x % y): abs(x);
}

int main(int argc, char **argv)
{
	int a,b,c,d,r,s,t,g;
	char m,op;
	cin>>t;
	while(t--)
	{
		cin>>a>>m>>b>>op>>c>>m>>d;
		switch(op)
		{
			case '+':
			{
				r=(a*d)+(c*b);
				s=b*d;
				break;
			}
			case '-':
			{
				r=(a*d)-(c*b);
				s=b*d;
				break;
			}
			case '*':
			{
				r=a*c;
				s=b*d;
				break;
			}
			case '/':
			{
				r=a*d;
				s=b*c;
				break;
			}			
		}
		g=gcd(r,s);
		printf("%d/%d = %d/%d\n",r,s,(r/g),(s/g));
	}
	
	return 0;
}

