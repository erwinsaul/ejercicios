/* problem: Regular Octagon
 * code: 2853
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int c;
	double t,a;
	while(cin>>c && c)
	{
		t=(sqrt(2)-1)*c;
		a = 2.0 * t * t * (1 + sqrt(2));
	    printf("%.3f\n", a);
	}
	return 0;
}

