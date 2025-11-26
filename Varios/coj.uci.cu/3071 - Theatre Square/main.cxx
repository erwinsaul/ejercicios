/* problem: Theatre Square
 * code: 3031
 * site: coj.uci.cu
 * status: accepted
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	unsigned long n,m,a, r;
	cin>>n>>m>>a;
	r = (n/a + (n%a==0?0:1) ) * (m/a + (m%a==0?0:1));
	cout<<r;
	return 0;
}

