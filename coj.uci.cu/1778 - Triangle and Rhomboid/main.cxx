/* problem:  Triangle and Rhomboid
 * code: 1778
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	double a,b, r;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		r=(a*b)/8.0+(a*b)/16.0;
		printf("%.8f\n", r);
	}
	return 0;
}

