/* problem: Mixed Fractions
 * code: 3031
 * site: coj.uci.cu
 * status: TLE
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	long a, b, d, r;
	while(1)
	{
		scanf("%ld %ld", &a, &b);
		d = a / b;
		r = a % b;
		printf("%ld %ld / %ld",d,r,b);
	}
	return 0;
}

