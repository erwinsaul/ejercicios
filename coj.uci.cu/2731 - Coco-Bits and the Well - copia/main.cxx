/* problem: Coco-Bits and the Well
 * code: 2731
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	int t;
	double n, r, pi;
	pi=acos(-1);
	cin>>t;
	while(t--)
	{
		cin>>n;
		r = n*n - (pi*n/2.0*n/2.0);
		printf("%.2f\n", r);
	}	
	return 0;
}

