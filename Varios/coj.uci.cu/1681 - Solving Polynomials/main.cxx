/*   Problem: Solving Polynomials
 *   Code: 1681
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,c;
	double d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>=0)
	   puts("YES");
	else
	   puts("NO");
	return 0;
}

